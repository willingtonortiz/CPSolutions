import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    private static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scan.nextInt(), d, q, y, x;

        List<List<Integer>> list = new ArrayList<List<Integer>>();

        for(int i = 0; i < n; ++i){
            d = scan.nextInt();
            list.add(new ArrayList<Integer>());

            for(int j = 0; j < d; ++j){
                list.get(i).add(scan.nextInt());
            }

        }

        q = scan.nextInt();

        for(int i = 0; i < q; ++i){
            y = scan.nextInt(); y--;
            x = scan.nextInt(); x --;

            // System.out.println(list.size() + " " + list.get(y).size());

            if(y >= list.size() || x >= list.get(y).size()){
                System.out.println("ERROR!");
            }
            else{
                System.out.println(list.get(y).get(x));
            }
        }
    }
}

