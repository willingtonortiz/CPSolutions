#include <bits/stdc++.h>

using namespace std;

int DP[6][6];

int sumHour(int x, int y){ 
    return (DP[y - 1][x] + DP[y - 1][x - 1] + DP[y - 1][x + 1] + 
    DP[y][x] +
    DP[y + 1][x] + DP[y + 1][x - 1] + DP[y + 1][x + 1]);
}

int main(){
    for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 6; ++j){
            cin >> DP[i][j];
        }
    }

    int maxi = -81;

    for(int i = 1; i < 5; ++i){
        for(int j = 1; j < 5; ++j){
            maxi = max(maxi, sumHour(i, j));
        }
    }

    cout << maxi << endl;

    return 0;
}