import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    private static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int size = scan.nextInt();
        int resp = 0, sum = 0;

        int[] vec = new int[size];

        for(int i = 0; i < size; ++i){
            vec[i] = scan.nextInt();

            if(vec[i] < 0) resp++;
        }

        for(int i = 2; i <= size; ++i){
            for(int j = 0; j < size - i + 1; ++j){
                sum = 0;
                for(int k = 0; k < i; ++k){
                    sum += vec[j + k];
                }
                // System.out.println(sum);
                if(sum < 0) resp++;
            }
        }

        System.out.println(resp);
    }
}



