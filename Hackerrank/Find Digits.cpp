#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests, num, resp;
    string snum;

    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> snum;
        num = stoi(snum);

        resp = 0;

        for(int i = 0; i < snum.size(); ++i){
            if(snum[i] != '0' && num % (snum[i] - '0') == 0){
                resp ++;
            }
        }

        cout << resp << endl;
    }

    return 0;
}