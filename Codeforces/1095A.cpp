#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, aum = 1;
    string s, resp = "";

    cin >> size;
    cin >> s;   

    for(int i = 0; i < size; i = i + aum){
        resp += s[i];
        aum++;
    }

    cout << resp << endl;

    return 0;
}