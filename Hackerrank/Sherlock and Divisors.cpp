#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests, number, resp;

    cin >> tests;

    for(int i = 0; i < tests; ++i){
        cin >> number;

        resp = 0;

        vector<int> divi;

        // Se encuentran los divisores en O(sqrt(n))
        for(int j = 1; j * j <= number; ++j){
            if(number % j == 0){
                divi.push_back(j);
                if(j * j != number){
                    divi.push_back(number / j);
                }
            }
        }

        for(int j = 0; j < divi.size(); ++j){
            if(divi[j] % 2 == 0){
                resp++;
            }
        }

        cout << resp << endl;
    }


    return 0;
}

