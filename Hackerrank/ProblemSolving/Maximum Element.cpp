#include <bits/stdc++.h>

using namespace std;

// Types
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
// Stack
typedef stack<int> si;
typedef stack<char> sc;
typedef stack<string> ss;
// set
typedef set<int> seti;
typedef set<string> sets;
// map
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
// For
#define forn(i, n) for (int i = 0; i < n; ++i)
#define fornm(i, a, b) for (int i = a; i <= b; ++i)
#define fornmr(i, a, b) for (int i = a; i >= b; --i)
#define formap(it, map) for (auto it = map.begin(); it != map.end(); ++it)
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

int main() { 
    int size, type, temp;
    si pila, maxValues;
    
    cin >> size;

    forn(i, size){
        cin >> type;

        if(type == 1){
            cin >> temp;

            pila.push(temp);

            if(maxValues.empty()) maxValues.push(temp);
            else if(temp >= maxValues.top()){
                maxValues.push(temp);
            }
        }
        else if(type == 2){
            temp = pila.top();
            pila.pop();

            if(maxValues.top() == temp){
                maxValues.pop();
            }
        }
        else{
            print1(maxValues.top());
        }
    }
    
    return 0;
}


