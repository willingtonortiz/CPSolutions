#include <bits/stdc++.h>

using namespace std;

int bs(vector<int>& vec){
    int maxi = vec[0];
    
    for(int i = 0; i < vec.size(); ++i){
        maxi = max(maxi, vec[i]);
    }
    
    return maxi;
}
//21376 - 21361

int main() {
	
	int tests, n;
	
	cin >> tests;
	
	for(int i = 0; i < tests; ++i){
	    cin >> n;
	    
	    vector<int> vec(n);
	    
	    for(int j = 0; j < n; ++j){
	        cin >> vec[j];
	    }
	    
	    cout << bs(vec) << endl;
	}
	
	
	return 0;
}