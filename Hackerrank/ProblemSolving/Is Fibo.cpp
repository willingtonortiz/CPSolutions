#include <bits/stdc++.h>

using namespace std;
long long DP[10000];

int main(){
    int tests;
    bool isFibo;
    long long number;

    cin >> tests;

    DP[0] = 0;
    DP[1] = 1;
    for(int i = 2; i < 10000; ++i){
        DP[i] = DP[i - 1] + DP[i - 2];
    }

    for(int i = 0; i < tests; ++i){
        cin >> number;

        isFibo = false;
    
        for(int j = 0; j < 10000; ++j){
            if(number < DP[j]) break;
            if(number == DP[j]) {
                isFibo = true;
            }
        }

        if(isFibo){
            cout << "IsFibo" << endl;
        }
        else{
            cout << "IsNotFibo" << endl;
        }
    }

    return 0;
}
