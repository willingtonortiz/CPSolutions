#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests, n;
    
    cin >> tests;
    
    for(int i = 0; i < tests; ++i){
        cin >> n;
        
        vector<int> vec(n);
        
        for(int j = 0; j < n; ++j){
            cin >> vec[j];
        }
        
        sort(vec.begin(), vec.end());
        
        cout << vec[0] << endl;
    }
	
	return 0;
}