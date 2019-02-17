#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests;
    long long x, y, m, p;
    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> x >> y >> m >> p;

        if(__gcd(x, y) == __gcd(m, p)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }   

    return 0;
}

