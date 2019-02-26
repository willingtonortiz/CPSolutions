import java.util.*;

public class Main{
	private static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args){
		int num = scanner.nextInt();

		List<Integer> numbers = new ArrayList<>();

		for(int i = 0; i < num; ++i){
			numbers.add(scanner.nextInt());
		}

		Collections.sort(numbers);
		
		if(num % 2 == 1){
			System.out.println(numbers.get(num / 2));
		}
		else{
			System.out.println(numbers.get(num / 2 - 1));
		}

		scanner.close();
	}

}
