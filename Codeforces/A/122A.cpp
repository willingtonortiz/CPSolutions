#include <bits/stdc++.h>

using namespace std;

// Types
typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef vector<pii> vpii;
// Stack
typedef stack<int> stacki;
typedef stack<char> stackc;
typedef stack<string> stacks;
// set
typedef set<int> seti;
typedef set<string> sets;
// map
typedef map<int, int> mapii;
typedef map<string, int> mapsi;
typedef map<int, string> mapis;
//For
#define forn(i, n) for (int i = 0; i < n; ++i)
#define fornr(i, n) for (int i = n; i >= 0; --i)
#define fornm(i, a, b) for (int i = a; i <= b; ++i)
#define fornmr(i, a, b) for (int i = a; i >= b; --i)
#define formap(it, map) for (auto it = map.begin(); it != map.end(); ++it)

// Sort
#define sortvec(vec) sort(vec.begin(), vec.end())
#define sortrvec(vec) sort(vec.end(), vec.begin())

// print
#define print1(a) cout << a << endl
#define print2(a, b) cout << a << " " << b << endl
#define print3(a, b, c) cout << a << " " << b << " " << c << endl
#define print4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define prints(a) cout << a << " "
// read
#define read1(a) cin >> a
#define read2(a, b) cin >> a >> b
#define read3(a, b, c) cin >> a >> b >> c
#define read4(a, b, c, d) cin >> a >> b >> c >> d

int getLen(int num){
	int resp = 0;
	
	while(num){
		resp++;
		num /= 10;
	}
	
	return resp;
}

int main() {
	int num, len, temp;
	
	scanf("%d", &num);
	
	len = getLen(num);
	
	forn(i, len){
		
		for(int mask = 0; mask < (1 << (i + 1)); ++mask){
			temp = 0;
			
			// Formando un "Lucky number"
			for(int k = 0; k < i + 1; ++k){
				temp = temp * 10;
				if(((mask >> k) & 1)) temp += 4;
				else temp += 7;
			}
			
			if(num % temp == 0){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	
	return 0;
}


