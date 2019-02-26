#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpii;
typedef set<int> seti;
typedef set<string> sets;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
#define finl cout << endl
#define prints(a) cout << a << " "
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define fornmr(i, a, b) for(int i = a; i >= b; --i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)
#define println(a) cout << a << endl

int main(){
    int len;

    cin >> len;

    if(len % 5 == 0) println(len / 5);
    else println(len / 5 + 1);

    return 0;
}