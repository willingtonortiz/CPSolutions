import java.math.BigDecimal;
import java.util.*;
class Solution{

    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
      	sc.close();

        //Write your code here
        Arrays.sort(s, 0, n, new Comparator<Object>(){
            public int compare(Object a, Object b){
                BigDecimal n1 = new BigDecimal((String) a);
                BigDecimal n2 = new BigDecimal((String) b);

                return n2.compareTo(n1);
            }
        });

        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }

}