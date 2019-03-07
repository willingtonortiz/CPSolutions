#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, temp, cases;
    long long even, odd;
    
    cin >> cases;
    
    for(int j = 0; j < cases; ++j){
        cin >> size;
        odd = even = 0;
        
        for(int i = 0; i < size; ++i){
            cin >> temp;
            
            if(temp % 2 == 0) even++;
            else odd++;
        }
        
        cout << odd * even << endl;
    }
    
    return 0;
}