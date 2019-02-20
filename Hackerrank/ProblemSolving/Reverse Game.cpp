#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests, num, index;
    
    cin >> tests;

    // Se puede ver una propiedad en los número después de ordenar
    // num = 6
    // arrInicial = [0,1,2,3,4,5]
    // arrFinal =   [1,3,5,4,2,0]
    // Desde el inicio hasta la mitad, son impares (2 * n + 1)
    // Desde la mitad hasta el final, pares en orden inverso (2 * n)

    for(int i = 0; i < tests; ++i){
        cin >> num >> index;

        if(index < num / 2){
            cout << index * 2 + 1 << endl;
        }
        else{
            cout << (num - 1 - index) * 2 << endl;
        }

    }


    return 0;
}