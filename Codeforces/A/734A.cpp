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
    int len, a = 0, b = 0;
    string s;

    cin >> len >> s;

    forn(i, len){
        if(s[i] == 'A') a++;
        else b++;
    }
    
    if(a > b) cout << "Anton" << endl;
    else if(a < b) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}