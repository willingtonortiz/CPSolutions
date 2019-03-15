#include <bits/stdc++.h>

using namespace std;

int main() {
	int group;
	string cad, resp, temp;
	
	while(true){
		cin >> group;
		if(group == 0) break;
		cin >> cad;
		
		group = cad.size() / group;
		
		resp = "";
		
		for(int i = 0; i < cad.size(); i += group){
			// cout << i << " " << i + group << endl;
			temp = cad.substr(i, group);
			reverse(temp.begin(), temp.end());
			resp += temp;
		}
		
		cout << resp << endl;
	}
	
	return 0;
}



