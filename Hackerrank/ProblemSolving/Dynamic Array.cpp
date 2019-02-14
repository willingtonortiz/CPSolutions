#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, queries, type, a, b, lastA = 0;

    cin >> size >> queries;

    vector<vector<int>> list(size, vector<int>());

    for(int i = 0; i < queries; ++i){
        cin >> type >> a >> b;
        // cout << type << " " << a << " " << b << endl;
        
        if(type == 1){
            list[(a ^ lastA) % size].push_back(b);
        }
        else{
            int sz = list[(a ^ lastA) % size].size();
            lastA = list[(a ^ lastA) % size][b % sz];
            cout << lastA << endl;
        }
    }

    return 0;
}