#include <bits/stdc++.h>

using namespace std;

int main(){
    int trips, money, flavors, temp, a, b, mini, maxi;

    cin >> trips;

    for(int i = 0; i < trips; ++i){
        cin >> money >> flavors;

        // <costo, indices>
        map<int, stack<int>> ice;

        for(int j = 0; j < flavors; ++j){
            cin >> temp;

            ice[temp].push(j + 1);
        }

        for(auto it = ice.begin(); it != ice.end(); ++it){
            auto ser = ice.find(money - (*it).first);

            // cout << (*it).first << " ";

            // if(ser != ice.end()){
                // cout << (*ser).first << endl;
            // }
            // else{
                // cout << "NO" << endl;
            // }

            if(ser != ice.end()){
                if(((*it).first == (*ser).first)){
                    if((*it).second.size() > 1){
                        a = (*it).second.top();
                        (*it).second.pop();
                        b = (*it).second.top();
                        mini = min(a, b);
                        maxi = max(a, b);
                        cout << mini << " " << maxi << endl;
                        break;
                    }
                }
                else{
                    a = (*it).second.top();
                    b = (*ser).second.top();
                    mini = min(a, b);
                    maxi = max(a, b);
                    cout << mini << " " << maxi << endl;
                    break;
                } 
            }
        }

        // cout << i + 1 << endl;
    }

    return 0;
}

