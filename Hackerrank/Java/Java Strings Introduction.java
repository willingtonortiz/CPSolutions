import java.io.*;
import java.util.*;

public class Solution {

    public static String capitalize(String word){
        return Character.toUpperCase(word.charAt(0)) + word.substring(1);
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = sc.next();
        /* Enter your code here. Print output to STDOUT. */
        
        System.out.println(A.length() + B.length());

        if(A.compareTo(B) > 0){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

        System.out.print(capitalize(A) + " ");
        System.out.println(capitalize(B));
    }
}
