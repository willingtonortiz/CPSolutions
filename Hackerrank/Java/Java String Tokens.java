import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        boolean pase = false;
        
        while(s.length() != 0){
            if(s.charAt(0) == ' '){
                s = s.substring(1, s.length());
            }
            else{
                break;
            }
        }

        if(s.length() == 0){
            System.out.println(0);
            return;
        }

        String[] parts = s.split("[ !,?._'@]+");

        System.out.println(parts.length);

        for(int i = 0; i < parts.length; ++i){
            System.out.println(parts[i]);
        }
        
        scan.close();
    }
}

