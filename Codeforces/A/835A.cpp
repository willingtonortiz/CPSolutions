#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> seti;
typedef set<string> sets;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
#define finl cout << endl
#define prints(a) cout << a << " "
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)

int main(){
    int slen, v1, v2, t1, t2, resp1, resp2;

    cin >> slen >> v1 >> v2 >> t1 >> t2;
    resp1 = 2 * t1 + slen * v1;
    resp2 = 2 * t2 + slen * v2;

    if(resp1 < resp2) cout << "First" << endl;
    else if(resp1 > resp2) cout << "Second" << endl;
    else cout << "Friendship" << endl;

    return 0;
}