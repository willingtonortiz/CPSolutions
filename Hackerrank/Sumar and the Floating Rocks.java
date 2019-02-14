import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    public static int gcd(int a, int b){
        if(a == 0) return b;
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int tests, x1, y1, x2, y2;

        tests = reader.nextInt();

        for(int i = 0; i < tests; ++i){
            x1 = reader.nextInt();
            y1 = reader.nextInt();
            x2 = reader.nextInt();
            y2 = reader.nextInt();
            
            System.out.println(gcd(Math.abs(y2 - y1), Math.abs(x2 - x1)) - 1);
        }
    }
}
