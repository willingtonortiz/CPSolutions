#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string coun, rest;
	map<string, set<string>> msss;
	
	cin >> n;
	
	for(int i = 0; i < n; ++i){
		cin >> coun;
		getline(cin, rest);
		
		msss[coun].insert(rest);
	}
	
	for(auto it = msss.begin(); it != msss.end(); ++it){
		cout << (*it).first << " " << (*it).second.size() << endl;
	}
	
	return 0;
}



