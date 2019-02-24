#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, maxL, resp;

    cin >> a >> b >> c;

    maxL = max(a, max(b, c));
    resp = 2 * maxL - a - b - c;

    if(resp < 0) cout << 0 << endl;
    else cout << resp + 1 << endl;

    return 0;
}
