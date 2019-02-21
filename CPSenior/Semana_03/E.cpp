#include <bits/stdc++.h>

using namespace std;

long long n, k;
long long int DP[20][2];

long long int dp(int n, int ant){
    if(n == 0) return 1;
    if(DP[n][ant] != -1) return DP[n][ant];
    else{
        // Anterior k
        if(ant == 0){
            return DP[n][ant] = (k - 1) * dp(n - 1, 0) + dp(n - 1, 1);
        }
        // Anterior k - 1
        else{
            return DP[n][ant] = (k - 1) * dp(n - 1, 0);
        }
    }
}

int main(){

    cin >> n >> k;

    for(int i = 0; i < 20; ++i) for(int j = 0; j < 2; ++j) DP[i][j] = -1;

    cout << (k - 1) * dp(n - 1, 0) << endl;

    return 0;
}
