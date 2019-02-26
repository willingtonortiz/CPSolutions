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
    int rows;
    bool isPosible = false;

    cin >> rows;

    vs vec(rows);

    forn(i, rows){
        cin >> vec[i];

        if(!isPosible){
            if(vec[i][0] == 'O' && vec[i][1] == 'O'){
                isPosible = true;
                vec[i][0] = '+';
                vec[i][1] = '+';
            }
            else if(vec[i][3] == 'O' && vec[i][4] == 'O'){
                isPosible = true;
                vec[i][3] = '+';
                vec[i][4] = '+';
            }
        }
    }

    if(isPosible){
        cout << "YES" << endl;
        forn(i, rows){
            cout << vec[i] << endl;
        }
    } 
    else{
        cout << "NO" << endl;
    }

    return 0;
}