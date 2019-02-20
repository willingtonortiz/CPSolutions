#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests;
    long long cuts, a, b;

    cin >> tests;

    // Cuando es un cuadrado es cuando se llega al máximo número de cuadrados

    for(int i = 0; i < tests; ++i){
        cin >> cuts;
        a = cuts / 2;
        b = cuts - a;

        cout << a * b << endl;
    }


    return 0;
}