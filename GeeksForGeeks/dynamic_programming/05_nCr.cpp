#include <bits/stdc++.h>

using namespace std;

long long DP[1005][805];

long long dp(int n, int k){
	if(DP[n][k] != -1){
		return DP[n][k];
	}
	else{
		return DP[n][k] = (dp(n - 1, k) + dp(n - 1, k - 1)) % 1000000007LL;
	}
}

int main() {

	int test, n, k;

	memset(DP, -1, sizeof(DP));

	for(int i = 0; i <= 800; ++i) DP[i][0] = DP[i][i] = 1;

	cin >> test;

	for(int i = 0; i < test; ++i){
		cin >> n >> k;

		if(n >= k){
			cout << dp(n, k) << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	
	return 0;
}