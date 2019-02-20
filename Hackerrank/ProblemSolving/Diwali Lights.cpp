#include <bits/stdc++.h>

using namespace std;

long long DP[10005];

long long dp(int exp){
    if(DP[exp] != -1){
        return DP[exp];
    }
    else{
        DP[exp] = (dp(exp - 1) * 2) % 100000;
        return DP[exp];
    }
}

int main(){
    int tests;
    long long number;

    DP[1] = 2;
    for(int i = 2; i <= 10000; ++i){
        DP[i] = -1;
    }


    cin >> tests;

    // La cantidad de posibles combinaciones de luces encendidas
    // Menos '1', porque siempre hay al menos una luz encendidas
    // Es decir, no existe el caso cuando todo está apagado

    for(int i = 0; i < tests; ++i){
        cin >> number;

        cout << dp(number) - 1LL << endl;
    }


    return 0;
}