#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, temp;
    
    scanf("%d %d", &n, &m);
    
    //printf("%d %d\n", n, m);
    
    //vector<pair<long long, long long>> data(n, pair<long long, long long>());
    vector<pair<long long, long long>> data(n);
    vector<long long> sums(n + 1, 0);
    
    for(int i = 0; i < n; ++i){
        scanf("%lld", &data[i].second);
        
    }
    
    for(int i = 0; i < n; ++i){
        scanf("%lld", &data[i].first);
    }
    
    sort(data.begin(), data.end());
    reverse(data.begin(), data.end());
    
    
    // Suma de prefijos
    for(int i = 1; i < n + 1; ++i){
        sums[i] = sums[i - 1] + data[i - 1].second;
    }
    
    //for(int i = 0; i < n; ++i){
    //    printf("%lld %lld\n", data[i].first, data[i].second);
    //}
    
    for(int i = 0; i < m; ++i){
        scanf("%d", &temp);
        //resp = 0;
        
        //for(int j = 0; j < temp; ++j){
        //    resp += data[j].second;
        //}
        
        printf("%lld\n", sums[temp]);
    }
    
    return 0;
}


