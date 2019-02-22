#include <bits/stdc++.h>

using namespace std;

int main(){
    int groupsSize, resp = 0;

    cin >> groupsSize;

    vector<int> groups(groupsSize);

    for(int i = 0; i < groupsSize; ++i){
        cin >> groups[i];
    }

    sort(groups.begin(), groups.end());

    for(int i = 0; i < groupsSize / 2 + 1; ++i){
        resp += groups[i] / 2 + 1;
    }

    cout << resp << endl;

    return 0;
}