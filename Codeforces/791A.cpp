#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b, resp = 0;

    cin >> a >> b;

    while(a <= b){
        a *= 3;
        b *= 2;
        resp++;
    }

    cout << resp << endl;

    return 0;
}