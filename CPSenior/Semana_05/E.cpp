#include <bits/stdc++.h>

using namespace std;

// Types
typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef vector<pii> vpii;
// Stack
typedef stack<int> si;
typedef stack<char> sc;
typedef stack<string> ss;
// set
typedef set<int> seti;
typedef set<string> sets;
// map
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
//For
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define fornmr(i, a, b) for(int i = a; i >= b; --i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)
// print
#define print1(a) cout << a << endl
#define print2(a, b) cout << a << " " << b << endl
#define print3(a, b, c) cout << a << " " << b << " " << c << endl
#define print4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define prints(a) cout << a << " "
// read
#define read1(a) scanf("%d", &a)
#define read2(a, b) scanf("%d %d", &a, &b)
#define read3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define read4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)

string a, b;
int DP[1005][1005];

int dp(int x, int y){
    if(x >= a.size() || y >= b.size()) return 0;

    if(DP[x][y] != -1){
        return DP[x][y];
    }
    else{
        if(a[x] == b[y]){
            return 1 + dp(x + 1, y + 1);
        }
        else{
            return DP[x][y] = max(dp(x + 1, y), dp(x, y + 1));
        }
    }
}

int main(){

    while(getline(cin, a) && getline(cin, b)){

        forn(i, a.size() + 1) forn(j, b.size() + 1) DP[i][j] = -1;

        cout << dp(0, 0) << endl;
    }

    return 0;
}
