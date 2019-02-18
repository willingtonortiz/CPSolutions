import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        try{
            int x = scanner.nextInt();
            int y = scanner.nextInt();

            try{
                System.out.println(x / y);
            }
            catch(Exception e){
                System.out.println("java.lang.ArithmeticException: / by zero");
            }
        }
        catch(Exception e){
            System.out.println("java.util.InputMismatchException");
        }
    }
}

