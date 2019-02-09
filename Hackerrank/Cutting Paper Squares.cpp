#include <bits/stdc++.h>

using namespace std;

int main(){
    long long wi, he, mini, maxi, resp = 0;

    cin >> wi >> he;

    mini = min(wi, he);

    maxi = max(wi, he);

    if(wi == 1LL || he == 1LL){
        cout << (wi - 1LL) + (he - 1LL) << endl;
        return 0;
    }

    resp = maxi - 1LL;

    resp += maxi * (mini - 1LL);

    cout << resp << endl;

    return 0;
} // 524074814996367239