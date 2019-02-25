#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define finl cout << endl
#define prints(a) cout << a << " "

int main(){
    int size, temp;

    cin >> size;

    vi vec(size);
    vi resp;

    forn(i, size){
        cin >> vec[i];
    }

    temp = -1;

    forn(i, size){
        if(vec[i] != temp + 1){
            resp.push_back(temp);
            temp = vec[i];
        }
        else{
            temp++;
        }

        if(i + 1== size){
            resp.push_back(vec[i]);
        }
    }

    cout << resp.size() - 1 << endl;

    fornm(i, 1, resp.size() - 1){
        cout << resp[i] << " ";
    }

    return 0;
}