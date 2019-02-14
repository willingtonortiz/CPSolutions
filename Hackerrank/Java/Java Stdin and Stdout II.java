import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int ent = scanner.nextInt();
        double dou = scanner.nextDouble();
        String str = scanner.nextLine();
        str = scanner.nextLine();

        System.out.println("String: " + str);
        System.out.println("Double: " + dou);
        System.out.println("Int: " + ent);

        scanner.close();
    }
}

