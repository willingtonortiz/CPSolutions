#include <bits/stdc++.h>

using namespace std;

int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};

int main(){

    int queries;
    long long number, acum;

    cin >> queries;

    for(int i = 0; i < queries; ++i){
        cin >> number;
        acum = 1;

        if(number == 1){
            cout << 0 << endl;
            continue;
        }

        for(int j = 0; j < 16; ++j){
            if(j == 15){
                cout << j << endl;
                break;
            }
            acum *= primes[j];

            if(acum > number){
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}
