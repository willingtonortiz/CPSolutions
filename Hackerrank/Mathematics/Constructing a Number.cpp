#include <bits/stdc++.h>

using namespace std;

int digitSum(int n){
    int resp = 0;

    while(n){
        resp += n % 10;
        n /= 10;
    }

    return resp;
}

int main(){
    int test, num, temp, resp;

    cin >> test;

    for(int i = 0; i < test; ++i){
        cin >> num;
        resp = 0;

        for(int j = 0; j < num; ++j){
            cin >> temp;
            resp += digitSum(temp);
        }

        if(resp % 3 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
