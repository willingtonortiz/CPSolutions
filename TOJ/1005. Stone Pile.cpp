#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;

int dp(int stone, int a, int b){
    if(stone == n) return abs(a - b);

    return min(dp(stone + 1, a + vec[stone], b), dp(stone + 1, a, b + vec[stone]));
}

int main(){

    cin >> n;

    vec = vector<int>(n);

    for(int i = 0; i < n; ++i){
        cin >> vec[i];
    }

    cout << dp(0, 0, 0) << endl;

    return 0;
}