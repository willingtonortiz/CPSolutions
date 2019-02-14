import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static int[][] arr = new int[6][6];

    public static int sumH(int x, int y){
        return (arr[y - 1][x - 1] + arr[y - 1][x] + arr[y - 1][x + 1]
        + arr[y][x]
        + arr[y + 1][x - 1] + arr[y + 1][x] + arr[y + 1][x + 1]);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {

        for (int i = 0; i < 6; i++) {

            for (int j = 0; j < 6; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }

        int max = -81;

        for (int i = 1; i < 5; i++) {

            for (int j = 1; j < 5; j++) {
                max = Math.max(max, sumH(j, i));
            }
        }

        System.out.println(max);

        scanner.close();
    }
}



