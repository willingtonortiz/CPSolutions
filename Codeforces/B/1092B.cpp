#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, resp = 0;

    cin >> size;    

    vector<int> vec(size);

    for(int i = 0; i < size; ++i){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    for(int i = 1; i < size; i+=2){
        resp += vec[i] - vec[i - 1];
    }

    cout << resp << endl;

    return 0;
}