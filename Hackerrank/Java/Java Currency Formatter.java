import java.util.*;
import java.text.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        NumberFormat numberFormat = NumberFormat.getCurrencyInstance(Locale.US);
        String us = numberFormat.format(payment);

        Locale indiaLocale = new Locale("en", "IN");

        numberFormat = NumberFormat.getCurrencyInstance(indiaLocale);
        String india = numberFormat.format(payment);

        numberFormat = NumberFormat.getCurrencyInstance(Locale.CHINA);
        String china = numberFormat.format(payment);

        numberFormat = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        String france = numberFormat.format(payment);
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}

