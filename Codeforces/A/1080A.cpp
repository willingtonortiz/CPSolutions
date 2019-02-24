#include <bits/stdc++.h>

using namespace std;

int main(){
    int friends, r = 2, g = 5, b = 8, resp = 0;
    float k;

    cin >> friends >> k;

    resp += ceil(r * friends / k);
    resp += ceil(g * friends / k);
    resp += ceil(b * friends / k);

    cout << resp << endl;

    return 0;
}