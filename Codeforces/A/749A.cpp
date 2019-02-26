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
    int number;
    cin >> number;

    cout << number / 2 << endl;

    if(number % 2 == 0){
        for(int i = 0; i < number; i += 2){
            cout << 2 << " ";
        }
    }
    else{
        for(int i = 0; i + 3 < number; i += 2){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    cout << endl;

    return 0;
}