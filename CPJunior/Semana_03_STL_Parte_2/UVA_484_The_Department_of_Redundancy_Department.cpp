#include <bits/stdc++.h>

using namespace std;

int main() {
	long long temp, index = 1;
	
	map<long long, long long> freq;
	map<long long, long long> order;
	
	while(scanf("%lld", &temp) != EOF){
		if(freq.find(temp) == freq.end()){
			freq[temp] = 1;
			order[index++] = temp;
		}
		else{
			freq[temp]++;
		}
	}
	
	for(auto it = order.begin(); it != order.end(); ++it){
		printf("%lld %lld\n", (*it).second, freq[(*it).second]);
	}
	
	return 0;
}



