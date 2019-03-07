#include <bits/stdc++.h>>

using namespace std;

int main(){
    
    long long int number, ans;
    
    while(scanf("%lld", &number) != EOF){
        ans = __builtin_popcountll(number);
            
        printf("%lld\n", ans);
    }
    
    
    return 0;
}

