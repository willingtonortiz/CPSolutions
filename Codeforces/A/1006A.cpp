#include <bits/stdc++.h>

using namespace std;

typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
#define  forn(i, n) for(int i = 0; i < n; ++i)
#define  fornm(i, a, b) for(int i = a; i <= b; ++i)
#define finl cout << endl
#define prints(a) cout << a << " "

bool DP[101];

int main(){
    int size, temp;

    cin >> size;

    forn(i, size) {
        cin >> temp;
        
        if(temp % 2 == 0) temp--; 

        prints(temp);
    }
    return 0;
}