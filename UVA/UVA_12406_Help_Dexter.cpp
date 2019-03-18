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

long long parser(int n){
	long long resp = 0;
	
	while(n != 1){
		resp = resp * 10 + (((n & 1) == 0) ? 1 : 2);
		n >>= 1;
	}
	resp = resp * 10 + 2;
	return resp;
}

int main() {
	int test, a, b;
	long long mini, maxi, temp;
	
	scanf("%d", &test);

	forn(i, test){
		scanf("%d %d", &a, &b);
		maxi = -1L;
		mini = (1L << 62);
		
		for(int j = (1 << (a - 1)); j < (1 << (a)); ++j){
			temp = parser(j);
			
			if(temp % (1 << b) == 0){
				mini = min(mini, temp);
				maxi = max(maxi, temp);
			}
		}
		
		if(mini == (1L << 32) || maxi == -1L){
			printf("Case %i: impossible\n", i + 1);
		}
		else if(mini == maxi){
			printf("Case %i: %lld\n", i + 1, maxi);
		}
		else{
			printf("Case %i: %lld %lld\n", i + 1, mini, maxi);
		}
	}
	
	return 0;
}


