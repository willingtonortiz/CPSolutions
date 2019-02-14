import java.util.*;
import java.io.*;



class Solution{
    private static Scanner sc = new Scanner(System.in);

    public static void main(String []argh)
    {
        int tests = sc.nextInt();
        String inp = "";
        long num;

        for(int i = 0; i < tests; ++i){
            try{
                inp = sc.next();
                num = Long.parseLong(inp);

                System.out.println(num + " can be fitted in:")    ;
                if(num >= Byte.MIN_VALUE && num <= Byte.MAX_VALUE){
                    System.out.println("* byte");
                }
                if(num >= Short.MIN_VALUE  && num <= Short.MAX_VALUE){
                    System.out.println("* short");
                }
                if(num >= Integer.MIN_VALUE  && num <= Integer.MAX_VALUE){
                    System.out.println("* int");
                }
                if(num >= Long.MIN_VALUE  && num <= Long.MAX_VALUE){
                    System.out.println("* long");
                }
            }
            catch(NumberFormatException e){
                System.out.println(inp + " can't be fitted anywhere.");
            }

        }
    }
}



