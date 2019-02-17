import java.io.*;
import java.util.*;
interface PerformOperation {
 boolean check(int a);
}
class MyMath {
 public static boolean checker(PerformOperation p, int num) {
  return p.check(num);
 }

    public PerformOperation isOdd(){
        return new IsOdd();
    }
    public PerformOperation isPalindrome(){
        return new IsPalindrome();
    }
    public PerformOperation isPrime(){
        return new IsPrime();
    }
}

class IsOdd implements PerformOperation{
    public boolean check(int a){
        if(a % 2 == 0) return false;
        return true;
    }
}

class IsPalindrome implements PerformOperation{
    public boolean check(int a){
        int resp = 0;
        int temp = a;

        while(temp != 0){
            resp = resp * 10 + (temp % 10);
            temp /= 10;
        }

        if(resp == a) return true;
        return false;
    }
}

class IsPrime implements PerformOperation{
    public boolean check(int a){
        return java.math.BigInteger.valueOf(a).isProbablePrime(1);
    }
}

public class Solution {

 public static void main(String[] args) throws IOException {
  MyMath ob = new MyMath();
  BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  int T = Integer.parseInt(br.readLine());
  PerformOperation op;
  boolean ret = false;
  String ans = null;
  while (T--> 0) {
   String s = br.readLine().trim();
   StringTokenizer st = new StringTokenizer(s);
   int ch = Integer.parseInt(st.nextToken());
   int num = Integer.parseInt(st.nextToken());
   if (ch == 1) {
    op = ob.isOdd();
    ret = ob.checker(op, num);
    ans = (ret) ? "ODD" : "EVEN";
   } else if (ch == 2) {
    op = ob.isPrime();
    ret = ob.checker(op, num);
    ans = (ret) ? "PRIME" : "COMPOSITE";
   } else if (ch == 3) {
    op = ob.isPalindrome();
    ret = ob.checker(op, num);
    ans = (ret) ? "PALINDROME" : "NOT PALINDROME";

   }
   System.out.println(ans);
  }
 }
}
