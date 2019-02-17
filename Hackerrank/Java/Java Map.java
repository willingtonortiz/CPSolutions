//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{

    private static Scanner scanner = new Scanner(System.in);

	public static void main(String []argh)
	{
        int n = scanner.nextInt();
        scanner.nextLine();
        String name;
        String number;

        Map<String, String> map = new HashMap<String, String>();
        
        for(int i = 0; i < n; ++i){
            name = scanner.nextLine();
            number = scanner.nextLine();

            map.put(name, number);
        }

        while(scanner.hasNext()){
            name = scanner.nextLine();
            number = map.get(name);


            if(number != null){
                System.out.println(name + "=" + number);
            }
            else{
                System.out.println("Not found");
            }
        }
    }
		
}



