#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    int queries, a, b;

    set<int> mySet;

    cin >> queries;

    for(int i = 0; i < queries; ++i){
        cin >> a >> b;

        if(a == 1){
            mySet.insert(b);
        }
        else if(a == 2){
            mySet.erase(b);
        }
        else{
            auto it = mySet.find(b);

            if(it != mySet.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

    return 0;
}



