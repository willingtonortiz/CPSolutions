import java.util.*;

public class Solution {

    private static int[] arr;
    private static int leap;

    public static boolean dp(int pos){
        if(pos >= arr.length) return true;
        if(pos < 0 || arr[pos] == 1) return false;

        arr[pos] = 1;
        return dp(pos - 1) || dp(pos + 1) || dp(pos + leap);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int queries = scan.nextInt(), size;

        for(int i = 0; i < queries; ++i){
            size = scan.nextInt();
            leap = scan.nextInt();

            arr = new int[size];

            for(int j = 0; j < size; ++j){
                arr[j] = scan.nextInt();
            }

            boolean result = dp(0);

            if(result){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}

