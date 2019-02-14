import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0, k);
        String largest = s.substring(0, k);
        
        for(int i = 0; i < s.length() - k + 1; ++i){
            if(smallest.compareTo(s.substring(i, i + k)) > 0){
                smallest = s.substring(i, i + k);
            }

            if(largest.compareTo(s.substring(i, i + k)) < 0){
                largest = s.substring(i, i + k);
            }
        }
        
        return smallest + "\n" + largest;
    }

