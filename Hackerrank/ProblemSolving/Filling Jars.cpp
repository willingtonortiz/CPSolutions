#include <bits/stdc++.h>

using namespace std;

int main(){
    long long jars, queries, a, b, k, resp = 0;

    cin >> jars >> queries;

    for(int i = 0; i < queries; ++i){
        cin >> a >> b >> k;

        resp += (b - a + 1) * k;
    }

    cout << resp / jars << endl;

    return 0;
}