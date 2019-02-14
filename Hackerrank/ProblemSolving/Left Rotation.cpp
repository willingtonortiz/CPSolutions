#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, rot;

    cin >> num >> rot;

    vector<int> vec(num);

    for(int i = 0; i < num; ++i){
        cin >> vec[i];
    }

    for(int i = 0; i < num; ++i){
        cout << vec[(i + rot) % num] << " ";
    }

    return 0;
}