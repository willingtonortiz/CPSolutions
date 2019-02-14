import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

// Write your code here
public static Scanner sc = new Scanner(System.in);
public static boolean flag = true;
public static int B = initialize();
public static int H = initialize();

public static int initialize(){
    int num = sc.nextInt();
    if(num <= 0 && flag){
        System.out.println("java.lang.Exception: Breadth and height must be positive");
        flag = false;
    }
    return num;
}

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

