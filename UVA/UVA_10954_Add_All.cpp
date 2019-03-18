#include <bits/stdc++.h>

using namespace std;

int main() {
	int len, temp;
	long long resp, a, b;
	
	while(true){
		scanf("%d", &len);
		if(len == 0) break;
		
		priority_queue<int, vector<int>, greater<int>> pq;
		resp = 0;
		
		for(int i = 0; i < len; ++i){
			scanf("%d", &temp);
			pq.push(temp);
		}
		
		while(pq.size() > 1){
			a = pq.top(); pq.pop();
			b = pq.top(); pq.pop();
			
			resp += a + b;
			pq.push(a + b);
		}

		printf("%lld\n", resp);
	}
	
	
	
	return 0;
}



