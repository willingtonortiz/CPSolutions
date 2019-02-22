#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << ((a > 0) ? a * (a + 1) / 2 : -1 * a * (a - 1) / 2 + 1) << endl;

    return 0;
}