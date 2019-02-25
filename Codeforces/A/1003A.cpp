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

// Solo depende de la moneda con máxima frecuencia
// Siempre deberán estar en bolsillos diferentes
// Por lo que es el mínimo
int main(){
    int size, temp, maxi = 0;
    mapii mapa;    

    cin >> size;

    forn(i, size){
        cin >> temp;
        mapa[temp]++;
    }

    formap(it, mapa){
        maxi = max(maxi, (*it).second);
    }

    cout << maxi << endl;

    return 0;
}