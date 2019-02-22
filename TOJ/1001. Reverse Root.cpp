#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<long long> pila;
    long long a;

    while(cin >> a){
        pila.push(a);
    }
    while(!pila.empty()){
        printf("%lf\n", sqrt(pila.top()));
        pila.pop();
    }

    return 0;
}