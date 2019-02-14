import java.util.*;
import java.io.*;

class Solution{
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String []argh){
        int query = scanner.nextInt();
        int a, b, n, sum;

        for(int i = 0; i < query; ++i){
            a = scanner.nextInt();
            b = scanner.nextInt();
            n = scanner.nextInt();
            sum = a;
            for(int j = 0; j < n; ++j){
                sum += (1 << j) * b;
                System.out.print(sum + " ");
            }
            System.out.println("");
        }
    }
}

