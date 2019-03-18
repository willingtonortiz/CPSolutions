#include <bits/stdc++.h>

using namespace std;

// Types
typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<string> vecs;
typedef vector<int> veci;
typedef vector<veci> vecveci;
typedef vector<bool> vecb;
typedef pair<int, int> pairii;
typedef pair<string, int> pairsi;
typedef pair<int, string> pairis;
typedef vector<pairii> vecpairii;
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

// print
#define print1(a) printf("%d\n", a)
#define print2(a, b) printf("%d %d\n", a, b)
#define print3(a, b, c) printf("%d %d %d\n", a, b, c)
#define print4(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
#define prints(a) printf("%d", a);
// read
#define read1(a) scanf("%d", &a)
#define read2(a, b) scanf("%d%d", &a, &b)
#define read3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define read4(a, b, c, d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define INF 999999999


int main(){
	int size, temp, cur;
	long long resp;

	read1(size);

	veci data(size);
	// seti data;

	forn(i, size){
		// read1(&data[i]);
		scanf("%d", &data[i]);
		// data.insert(temp);
	}

	sortvec(data);

	cur = 0;
	resp = 0LL;

	forn(i, size){
		if(cur < data[i]){
			resp++;
			cur = data[i];
		}
	}

	// resp = data.size();

	resp = (resp * (resp - 1)) / 2LL;

	printf("%lld", resp);

	return 0;
}
