#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef set<int> seti;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
#define finl cout << endl
#define prints(a) cout << a << " "
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)

bool arr[10];

int main(){
    int len, queries, a, b;
    char c, d;
    string s;

    cin >> len >> queries;
    cin >> s;

    forn(i, queries){
        cin >> a >> b >> c >> d;

        fornm(j, a - 1, b - 1){
            if(s[j] == c){
                s[j] = d;
            }
        }
    }

    cout << s << endl;

    return 0;
}