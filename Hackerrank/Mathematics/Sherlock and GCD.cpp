#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){
    int test, size, temp, resp;

    cin >> test;

    for(int i = 0; i < test; ++i){
        cin >> size;


        for(int j = 0; j < size; ++j){
            cin >> temp;

            if(j == 0) resp = temp;
            else{
                resp = __gcd(resp, temp);
            }
        }

        if(resp == 1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}

/*
NO
YES
NO
NO
YES
NO
YES
NO
YES
NO
*/
