#include <bits/stdc++.h>

using namespace std;

int main(){
    long long c, r;

    cin >> r >> c;

    // Se debe interpretar la matriz como dos arreglos de elementos pares
    // e impares, así que solo se debe encontrar los terminos

    // Filas impares, donde están los números (2 * n)
    if(r % 2 != 0){
        cout << 2 * (5 * (r / 2) + c - 1) << endl;
    }
    // Filas pares, donde están los números (2 * n + 1)
    else{
        cout << 2 * (5 * (r / 2 - 1) + c - 1) + 1 << endl;
    }

    return 0;
}