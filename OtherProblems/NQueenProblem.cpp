#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef vector<pii> vpii;
// set
typedef set<int> seti;
typedef set<string> sets;
// map
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;

#define finl cout << endl
#define prints(a) cout << a << " "
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define fornmr(i, a, b) for(int i = a; i >= b; --i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)
// print
#define print1(a) cout << a << endl
#define print2(a, b) cout << a << " " << b << endl
#define print3(a, b, c) cout << a << " " << b << " " << c << endl
#define print4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define prints(a) cout << a << " "
// read
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define read4(a, b, c, d) cin >> a >> b >> c >> d


// Indexado desde 1 hasta n
int n;
int sol = 0;
int BT[20];
bool found = false;

void printSolution(){
	cout << "Solution: " << ++sol << endl;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(BT[i] == j)
                cout << "\tO";
            else
                cout << "\t_";
        }
        cout << endl;
    }
    cout << endl << endl;
}

// Fila k, columna i
bool canPlace(int k, int i){

    // Hasta el anterior
    for(int j = 1; j < k; ++j){
        if(BT[j] == i || (abs(k - j) == abs(BT[j] - i))){
            return false;
        }
    }

    return true;
}

void bt(int k){
	// Si no ha encontrado solucion
	// if(!found){
	    // Columnas
	    for(int i = 1; i <= n; ++i){
	
	        // Se pudo colocar una reina en la fila k
	        if(canPlace(k, i)){
	            BT[k] = i;
	            // Solucion
	            if(k == n){
	                printSolution();
	            	// found = true;
	            	// return;
	            }
	            else{
	                bt(k + 1);
	            }
	        }
	    }
	// }
}

int main(){
    n = 4;

    bt(1);
    
    return 0;
}


