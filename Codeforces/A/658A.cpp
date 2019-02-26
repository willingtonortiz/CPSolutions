#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpii;
typedef set<int> seti;
typedef set<string> sets;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
#define finl cout << endl
#define prints(a) cout << a << " "
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define fornmr(i, a, b) for(int i = a; i >= b; --i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)
#define println(a) cout << a << endl

int main(){
    int prob, lose, sum = 0, respA = 0, respB = 0, times = 0;

    cin >> prob >> lose;

    vpii vec(prob);
    
    forn(i, prob) cin >> vec[i].first;
    forn(i, prob) cin >> vec[i].second;

    fornm(i, 0, prob - 1){
        times += vec[i].second;
        respA += max(0, vec[i].first - times * lose);
    }
    times = 0;
    fornmr(i, prob - 1, 0){
        times += vec[i].second;
        respB += max(0, vec[i].first - times * lose);
    }

    if(respA > respB) println("Limak");
    else if(respA < respB) println("Radewoosh");
    else println("Tie");

    return 0;
}