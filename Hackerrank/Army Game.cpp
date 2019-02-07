#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, resp = 0;

    cin >> n >> m;

    if(n >= 2 && m >= 2){
        resp += (n / 2) * (m / 2);
    }
    int a = (n % 2) * m;
    int b = (m % 2) * n;

    if(a % 2 == 1 || b % 2 == 1){
        resp++;
    }

    resp += a / 2;
    resp += b / 2;

    cout << resp << endl;

    return 0;
}
