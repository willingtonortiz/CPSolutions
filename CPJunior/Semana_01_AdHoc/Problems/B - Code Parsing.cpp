#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<bool> vb;
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
#define print(a) cout << a
#define prints(a) cout << a << " "
#define println cout << endl;
// read
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define read4(a, b, c, d) cin >> a >> b >> c >> d



int main(){
    int countX = 0, countY = 0;
    string s;

    cin >> s;

    forn(i, s.size()){
        if(s[i] == 'x') countX++;
        else countY++;
    }

    if(countX > countY){
        forn(i, countX - countY) cout << "x";
    }
    else{
        forn(i, countY - countX) cout << "y";
    }

    println;

    return 0;
}