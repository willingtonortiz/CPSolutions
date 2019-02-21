#include <bits/stdc++.h>

using namespace std;

string s;
int DP[6100][6100];

long long int dp(int left, int right){
    if(left >= right) return 0LL;

    if(DP[left][right] != -1) return DP[left][right];
    else{
        if(s[left] != s[right]){
            return DP[left][right] = 1LL + min(dp(left + 1, right), dp(left, right - 1));
        }
        return DP[left][right] = dp(left + 1, right - 1);
    }
}

int main(){
    int tests;

    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> s;

        for(int i = 0; i < 6100; ++i) for(int j = 0; j < 6100; ++j) DP[i][j] = -1;

        cout << dp(0, s.size() - 1) << endl;
    }

    return 0;
}
