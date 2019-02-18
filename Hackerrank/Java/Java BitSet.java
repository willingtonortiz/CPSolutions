import java.io.*;
import java.util.*;

public class Solution {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt(), m = scanner.nextInt();
        int qa, qb;
        String s = "";
        BitSet a = new BitSet(n);
        BitSet b = new BitSet(n);

        BitSet[] lst = new BitSet[2];
        lst[0] = a;
        lst[1] = b;

        for(int i = 0; i < m; ++i){
            s = scanner.next();
            qa = scanner.nextInt();
            qb = scanner.nextInt();

            if(s.equals("AND")){
                lst[qa - 1].and(lst[qb - 1]);
            }
            else if(s.equals("OR")){
                lst[qa - 1].or(lst[qb - 1]);
            }
            else if(s.equals("XOR")){
                lst[qa - 1].xor(lst[qb - 1]);
            }
            else if(s.equals("FLIP")){
                lst[qa - 1].flip(qb);
            }
            else{
                lst[qa - 1].set(qb);
            }

            System.out.println(a.cardinality() + " " + b.cardinality());
        }
        
    }
}

