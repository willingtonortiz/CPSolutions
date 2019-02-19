import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class Solution {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        try{
            MessageDigest md = MessageDigest.getInstance("MD5");
            byte[] message = md.digest((scanner.next().getBytes()));


            BigInteger no = new BigInteger(1, message);

            String hashtext = no.toString(16);

            while(hashtext.length() < 32){
                hashtext = "0" + hashtext;
            }

            System.out.println(hashtext);
        }
        catch (NoSuchAlgorithmException e) {
            System.out.println(e);
        }
    }
}

