#include <bits/stdc++.h>
 
using namespace std;
 
int DP[21][21];
int MAT[21][21];
int n, m;
 
int dp(int x, int y){
	if(x == m - 1 && y == n - 1){
		return MAT[y][x];
	}
	if(y == n - 1){
		DP[y][x] = MAT[y][x] + dp(x + 1, y);
		return DP[y][x];
	}
	if(x == m - 1){
		DP[y][x] = MAT[y][x] + dp(x, y + 1);
		return DP[y][x];
	}
	
	if(DP[y][x] != -1){
		return DP[y][x];
	}
	else{
		// cout << MAT[y][x] << endl;
		DP[y][x] = min(MAT[y][x] + dp(x + 1, y), MAT[y][x] + dp(x, y + 1));
		
		return DP[y][x];
	}
}
 
int main() {
	int x, y;
	
	for(int i = 0; i < 21; ++i){
		for(int j = 0; j < 21; ++j){
			DP[i][j] = -1;
			MAT[i][j] = -1;
		}
	}
	
	cin >> n >> m;
	cin >> y >> x;
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> MAT[i][j];
		}
	}
	
	int resp = 2 * MAT[y - 1][x - 1] - dp(x - 1, y - 1);
	
	if(resp >= 0){
		cout << "Y " << resp << endl;
	}
	else{
		cout << "N" << endl;
	}
	
	return 0;
}
