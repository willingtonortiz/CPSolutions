#include <bits/stdc++.h>

using namespace std;

int main(){
    int queries, n;

    cin >> queries;

    for(int i = 0; i < queries; ++i){
        cin >> n;

        if(n % 7 == 0) cout << n / 7 << endl;
        else cout << n / 7 + 1 << endl;
    }

    return 0;
}