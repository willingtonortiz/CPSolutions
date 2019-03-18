#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    long long sum = 0, temp;

    cin >> size;

    for(int i = 0; i < size; ++i){
        cin >> temp;

        sum += temp;
    }

    cout << sum << endl;
}
