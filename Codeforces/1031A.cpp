#include <bits/stdc++.h>

using namespace std;

int main(){
    int w, h, k, resp = 0;

    cin >> w >> h >> k;

    for(int i = 1; i <= k; ++i){
        resp += w * h - (w - 2) * (h - 2);
        w -= 4;
        h -= 4;
    }

    cout << resp << endl;

    return 0;
}
