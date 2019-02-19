#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests;
    long long a, b, k;

    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> a >> b >> k;

        // Salto par es la resta
        if(k % 2LL == 0){
            cout << k / 2LL * (a - b) << endl;
        }
        // Salto impar es la resta y un salto a la derecha
        else{
            cout << k / 2LL * (a - b) + a << endl;
        }
    }

    return 0;
}
