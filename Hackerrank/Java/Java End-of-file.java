import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String data;
        int count = 0;

        while(sc.hasNext()){
            data = sc.nextLine();
            count++;
            System.out.println(count + " " +data);
        }
    }
}

