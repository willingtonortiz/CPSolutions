#include <bits/stdc++.h>

using namespace std;

bool isUpperCase(char i){
    if(i >= 'A' && i <= 'Z') return true;
    return false;
}

int main(){
    int resp = 0;
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        if(isUpperCase(s[i])) resp++;
    }

    cout << resp + 1<< endl;

    return 0;
}
