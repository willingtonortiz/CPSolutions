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
    int size, finger, temp;
    
    forn(i, 10) {
        arr[i] = false;
    }

    cin >> size >> finger;

    vi vec(size);

    forn(i, size){
        cin >> vec[i];
    }

    forn(i, finger){
        cin >> temp;
        arr[temp] = true;
    }

    forn(i, vec.size()){
        if(arr[vec[i]]) cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}