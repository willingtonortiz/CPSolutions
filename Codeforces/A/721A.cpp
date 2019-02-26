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
    int size, count = 0;
    string cad;
    vi sizes;

    cin >> size >> cad;

    forn(i, size){
        if(cad[i] == 'W'){
            if(count != 0){
                sizes.push_back(count);
                count = 0;
            }
        }
        else{
            count++;
        }
    }

    if(count != 0){
        sizes.push_back(count);
    }

    cout << sizes.size() << endl;

    forn(i, sizes.size()){
        cout << sizes[i] << " ";
    }

    cout << endl;

    return 0;
}