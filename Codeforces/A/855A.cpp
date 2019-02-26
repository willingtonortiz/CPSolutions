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

bool arr[10];

int main(){
    int size;
    string temp;
    sets names;

    cin >> size;
    
    forn(i, size){
        cin >> temp;

        if(names.find(temp) != names.end()){
            cout << "YES" << endl;
        }
        else{
            names.insert(temp);
            cout << "NO" << endl;
        }
    }

    return 0;
}