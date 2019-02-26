#include <bits/stdc++.h>

using namespace std;

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
// set
typedef set<int> seti;
typedef set<string> sets;
// map
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;

#define finl cout << endl
#define prints(a) cout << a << " "
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
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define read4(a, b, c, d) cin >> a >> b >> c >> d


int main(){
    int pings, item, win, lose, lena = 0, lenb = 0, wina = 0, winb = 0;
    
    read1(pings);

    forn(i, pings){
        read3(item, win, lose);

        if(item == 1){
            lena += 10;
            wina += win;
        }
        else{
            lenb += 10;
            winb += win;
        }
    }

    if(wina >= lena / 2) print1("LIVE");
    else print1("DEAD");

    if(winb >= lenb / 2) print1("LIVE");
    else print1("DEAD");

    return 0;
}