import java.util.*;
import java.math.BigInteger;

public class Main {

	public static BigInteger DP[][];
	public static long k;
	public static int n;

	public static BigInteger dp(int n, int prev){
		if(n == 0) return BigInteger.ONE;

		if(DP[n][prev] != null) return DP[n][prev];
		else{
			// Anterior no es cero
			if(prev == 0){
				return DP[n][prev] = BigInteger.valueOf(k - 1L).multiply(dp(n - 1, 0)).add(dp(n - 1, 1));
			}
			// Anterior es cero
			else{
				return DP[n][prev] = BigInteger.valueOf(k - 1L).multiply(dp(n - 1, 0));
			}
		}
	}

    public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		n = scanner.nextInt();
		k = scanner.nextLong();
		
		DP = new BigInteger[1800][2];

		for(int i = 0; i < 1800; ++i) for(int j = 0; j < 2; ++j) DP[i][j] = null;

		System.out.println(BigInteger.valueOf(k - 1L).multiply(dp(n - 1, 0)));
	}
}

