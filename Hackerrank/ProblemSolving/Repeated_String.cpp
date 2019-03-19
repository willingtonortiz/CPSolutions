#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long resp = 0, n;
    string s;

    cin >> s >> n;

    // abcac abcac

    // contar en el string dado
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'a') resp++;
    }

    resp *= (long long)n / (long long)s.size();

    // cout << resp << endl;
    // 5 => 13
    // 5 + 5 + 3

    if(n % s.size() != 0){
        for (int i = 0; i < n % s.size(); ++i) {
            if (s[i] == 'a') resp++;
        }
    }


    cout << resp << endl;

    return 0;
}
