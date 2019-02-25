#include <bits/stdc++.h>

using namespace std;

#define  forn(i, n) for(int i = 0; i < n; ++i)
#define  fornm(i, a, b) for(int i = a; i <= b; ++i)
#define finl cout << endl
#define escr(a) cout << a
#define conc(a) << a

bool DP[101];

int main(){
    int points, maxM, ini, fin, count = 0;

    cin >> points >> maxM;

    fornm(i, 1, maxM) DP[i] = false;

    forn(i, points){
        cin >> ini >> fin;

        fornm(j, ini, fin) DP[j] = true;
    }

    
    fornm(i, 1, maxM) if(!DP[i]) count++;

    cout << count << endl;

    fornm(i, 1, maxM)
        if(!DP[i]) cout << i << " ";

    finl;

    return 0;
    //2 3 4
}