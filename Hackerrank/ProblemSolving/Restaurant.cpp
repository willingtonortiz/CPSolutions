#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests, len, bre, mini, resp, temp;

    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> len >> bre;

        resp = 999999999;

        mini = min(len, bre);

        vector<int> divi;

        // Encontrando los divisores del menor
        for(int j = 1; j * j <= mini; ++j){
            if(mini % j == 0){
                divi.push_back(j);
                if(j * j != mini){
                    divi.push_back(mini / j);
                }
            }
        }

        for(int j = 0; j < divi.size(); ++j){
            if(len % divi[j] == 0 && bre % divi[j] == 0){
                temp = (len * bre) / (divi[j] * divi[j]);

                if(temp < resp){
                    resp = temp;
                }
            }
        }

        cout << resp << endl;
    }

    return 0;
}