#include <bits/stdc++.h>

using namespace std;

// int bs()

int main() {
	int tests, n, m, small;
	bool found;
	
	cin >> tests;
	
	for(int i = 0; i < tests; ++i){
	    cin >> n >> m;
	    small = 0;
	    found = false;
	    
	    vector<int> vec(n);
	    
	    for(int j = 0; j < n; ++j){
	        cin >> vec[j];
	    }
	    
	    for(int j = 0; j < n; ++j){
	        if(small != vec[j]){
	            cout << small << endl;
	            found = true;
	            break;
	        }
	        else small++;
	    }
	    if(!found)
	        cout << small << endl;
	}
	
	return 0;
}