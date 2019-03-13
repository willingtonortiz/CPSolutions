#include <bits/stdc++.h>

using namespace std;

string isPrime(int n){
    if(n <= 1) return "No";
    
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0)
            return "No";
    }
    
    return "Yes";
}

int main() {
	
	int test, num;
	
	cin >> test;
	
	for(int i = 0; i < test; ++i){
	    cin >> num;
	    
	    cout << isPrime(num) << endl;
	}
	
	
	return 0;
}