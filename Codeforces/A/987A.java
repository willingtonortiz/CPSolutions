import java.util.*;
import java.util.*;
import java.util.*;
import java.util.*;
import java.util.*;
import java.util.*;

public class Main{
	private static Scanner scanner = new Scanner(System.in);

	public static void main(String[] args){
		int gemNumber = scanner.nextInt();

		Set<String> selected = new HashSet<>();

		// Conversion de nombre
		Map<String, String> gems = new HashMap<>();
		gems.put("purple", "Power");
		gems.put("green", "Time");
		gems.put("blue", "Space");
		gems.put("orange", "Soul");
		gems.put("red", "Reality");
		gems.put("yellow", "Mind");

		for(int i = 0; i < gemNumber; ++i)
			selected.add(scanner.next());

		System.out.println(6 - selected.size());

		for(Map.Entry<String, String> it : gems.entrySet()){
			if(!selected.contains(it.getKey())){
				System.out.println(it.getValue());
			}
		}

	}

}
