#include <bits/stdc++.h>

using namespace std;

long long DP[100005];

long long dp(int n){
    if(DP[n] != -1){
        return DP[n];
    }
    else{
        return DP[n] = (n * dp(n - 1)) % 1000000007LL;
    }
}

int main(){
    int tests, num;
    
    memset(DP, -1, sizeof(DP));
    DP[0] = 1;
    DP[1] = 1;
    
    scanf("%d", &tests);
    
    for(int i = 0; i < tests; ++i){
        
        scanf("%d", &num);
        
        printf("%lld\n", dp(num));
    }
    
    return 0;
}

