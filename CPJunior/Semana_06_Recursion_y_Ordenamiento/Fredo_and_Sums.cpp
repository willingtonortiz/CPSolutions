#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int size, test;
    long long mini, maxi;
    
    scanf("%d", &test);
    
    for(int i = 0; i < test; ++i){
        scanf("%d", &size);
        
        vector<int> vec(size);
    
        for(int j = 0; j < size; ++j){
            scanf("%d", &vec[j]);
        }
        
        sort(vec.begin(), vec.end());
        
        mini = maxi = 0;
        
        for(int j = 0; j < size / 2; ++j){
            maxi += abs(vec[j] - vec[size - j - 1]);
        }
        
        for(int j = 1; j < size; j += 2){
            mini += abs(vec[j] - vec[j - 1]);
        }
        
        printf("%lld %lld\n", mini, maxi);
    }
    
    return 0;
}



