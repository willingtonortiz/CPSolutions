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
    int rounds, a = 0, b = 0, fir, sec;

    cin >> rounds;

    forn(i, rounds){
        cin >> fir >> sec;
        if(fir > sec) a++;
        else if(fir < sec) b++;
    }

    if(a > b) cout << "Mishka" << endl;
    else if (a < b) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;

    
    return 0;
}