#include <bits/stdc++.h>

using namespace std;

#define forn(n) for(int i = 0; i < n; i++)

typedef vector<int> VI;

int main(){
	int n, m;
	int mini;
	
	cin >> n >> m;
	
	mini = min(n, m);
	
	if(mini % 2 == 0){
		cout << "Malvika" << endl;
	}
	else{
		cout << "Akshat" << endl;
	}
	return 0;
}