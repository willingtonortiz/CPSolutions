import java.io.*;
import java.util.*;

public class Solution {

    private static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scan.nextInt(), queries, a, b;
        String type;

        List<Integer> list = new ArrayList<Integer>();

        for(int i = 0; i < n; ++i){
            list.add(scan.nextInt());
        }

        queries = scan.nextInt();

        for(int i = 0; i < queries; ++i){
            type = scan.next();

            if(type.equals("Insert")){
                a = scan.nextInt();
                b = scan.nextInt();

                list.add(a, b);
            }
            else{
                a = scan.nextInt();
                list.remove(a);
            }
        }

        for(Integer i : list){
            System.out.print(i + " ");
        }
    }
}

