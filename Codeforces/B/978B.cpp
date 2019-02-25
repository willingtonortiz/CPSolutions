#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
#define finl cout << endl
#define prints(a) cout << a << " "
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)


int main(){
    int size, counter = 0, acum = 0;
    string s;

    cin >> size;
    cin >> s;

    forn(i, size){
        if(s[i] == 'x'){
            acum++;
            if(acum >= 3){
                counter++;
            }
        }
        else{
            acum = 0;
        }
    }
    
    cout << counter << endl;

    return 0;
}