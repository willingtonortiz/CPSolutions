#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests, towns, routes, resp;

    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> towns;

        resp = 1;

        for(int j = 0; j < towns - 1; ++j){
            cin >> routes;

            resp = (resp * routes) % 1234567;
        }

        cout << resp << endl;
    }



    return 0;
}

