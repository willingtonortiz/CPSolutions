// 2. Fibonacci numbers

#include <bits/stdc++.h>

using namespace std;

long long DP[1005];

long long dp(int n){
    
    if(DP[n] != -1){
        return DP[n];
    }
    else{
        return DP[n] = (dp(n - 1) + dp(n - 2)) % 1000000007LL;
    }
}

int main() {
    memset(DP, -1, sizeof(DP));
    DP[0] = 0;
    DP[1] = 1;
	int test, temp;
	
	cin >> test;
	
	for(int i = 0; i < test; ++i){
	    cin >> temp;
	    
	    cout << dp(temp) << endl;
	}
	
	return 0;
}


