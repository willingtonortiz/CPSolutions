import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int num = scanner.nextInt();

        for(int i = 1; i <= 10; ++i){
            System.out.println(num + " x " + i + " = " + num * i);
        }
    }
}
