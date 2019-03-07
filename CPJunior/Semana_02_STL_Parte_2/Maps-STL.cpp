#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main() {
    int queries, a, b;
    string s;
    map<string, int> myMap;

    cin >> queries;

    for(int i = 0; i < queries; ++i){
        cin >> a;

        if(a == 1){
            cin >> s >> b;

            myMap[s] += b;
        }
        else if(a == 2){
            cin >> s;

            myMap.erase(s);
        }else{
            cin >> s;
            auto it = myMap.find(s);

            if(it != myMap.end()){
                cout << (*it).second << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
    
    return 0;
}
