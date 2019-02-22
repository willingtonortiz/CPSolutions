#include <bits/stdc++.h>

using namespace std;

int n;
long long int DP[50];

long long int dp(int index){
    if(index > n || n == 0) return 0;
    if(index == n) return 1;

    if(DP[index] != -1) return DP[index];
    else{
        return DP[index] = dp(index + 1) + dp(index + 2);
    }
}

int main(){
    for(int i = 0; i < 50; ++i) DP[i] = -1;

    cin >> n;

    cout << 2 * dp(1) << endl;

    return 0;
}
