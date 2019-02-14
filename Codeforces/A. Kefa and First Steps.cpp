#include <bits/stdc++.h>

using namespace std;

int main() {
	int size;
	
	cin >> size;
	
	vector<int> vec(size);
	
	for(int i = 0; i < size; ++i){
		cin >> vec[i];
	}
	
	int maxi = 1, resp = 1;
	
	for(int i = 1; i < size; ++i){
		if(vec[i - 1] <= vec[i]) resp++;
		else{
			if(resp > maxi){
				maxi = resp;
			}
			resp = 1;
		}
		if(i + 1 == size && resp > maxi){
			maxi = resp;
		}
	}
	
	cout << maxi << endl;
	
	return 0;
}

