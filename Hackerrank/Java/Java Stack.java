import java.util.*;

class Solution{

    public static void main(String []argh)
    {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            String input = sc.next();

            Stack<Character> pila = new Stack<Character>();

            for(int j = 0; j < input.length(); ++j){
                char i = input.charAt(j);
                if(i == '{' || i == '(' || i == '['){
                    pila.push(i);
                }
                else {
                    if(pila.isEmpty()) {pila.push('{'); break;}
                    if(pila.peek() == '{' && i == '}') pila.pop();
                    else if(pila.peek() == '[' && i == ']') pila.pop();
                    else if(pila.peek() == '(' && i == ')') pila.pop();
                }
            }

            if(pila.isEmpty()){
                System.out.println(true);
            }
            else{
                System.out.println(false);
            }
        }
    }
}

