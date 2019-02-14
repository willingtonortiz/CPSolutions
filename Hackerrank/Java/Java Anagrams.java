import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        if(a.length() != b.length()) return false;

        int[] arra = new int[27];
        int[] arrb = new int[27];

        for(int i = 0; i < a.length(); ++i){
            arra[Character.toLowerCase(a.charAt(i)) - 'a']++;
            arrb[Character.toLowerCase(b.charAt(i)) - 'a']++;
        }
        
        for(int i = 0; i < 27; ++i){
            if(arra[i] != arrb[i]) return false;
        }

        return true;
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
