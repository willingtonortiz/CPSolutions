#include <bits/stdc++.h>

using namespace std;

// Solo había que simular el problema

int main() {
	int num, temp;
	
	while(true){
		cin >> num;
		
		if(num == 0) break;

		queue<int> qi;

		for(int i = 1; i <= num; ++i){
			qi.push(i);
		}
		cout << "Discarded cards:";
		
		while(qi.size() > 1){
			if(qi.size() == 2){
				cout << " " << qi.front();
			}
			else{
				cout << " " << qi.front() << ",";
			}
			qi.pop();
			qi.push(qi.front());
			qi.pop();
		}
		
		cout << "\nRemaining card: " << qi.front() << endl;
	}
	
	return 0;
}



