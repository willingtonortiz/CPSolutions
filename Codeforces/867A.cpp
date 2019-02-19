#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sf = 0, fs = 0;
    string s;

    cin >> n;
    cin >> s;

    for(int i = 1; i < s.size(); ++i){
        if(s[i - 1] == 'S' && s[i] == 'F') sf++;
        else if(s[i - 1] == 'F' && s[i] == 'S') fs++;
    }

    if(sf > fs) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}