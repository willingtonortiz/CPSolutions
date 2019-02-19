#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c, d;

    cin >> n;

    vector<pair<int, int>> students;

    for(int i = 0; i < n; ++i){
        cin >> a >> b >> c >> d;

        students.push_back({a + b + c + d, i + 1});
    }

    stable_sort(students.begin(), students.end(), [](pair<int,int> a, pair<int,int> b){
        if(a.first != b.first){
            return a.first > b.first;
        }
        else{
            return a.second < b.second;
        }
    });

    for(int i = 0; i < n; ++i){
        if(students[i].second == 1){
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}

// 2