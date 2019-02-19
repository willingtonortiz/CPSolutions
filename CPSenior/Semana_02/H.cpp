#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double a, b, c, d;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a >> b >> c >> d;

        printf("Case %d: %lf\n", i + 1, a * sqrt(d / (d + 1)));
    }


    return 0;
}