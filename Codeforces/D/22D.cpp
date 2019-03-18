#include <bits/stdc++.h>
 
using namespace std;
 
// Types
typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
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
#define print1(a) printf("%d\n", a)
#define print2(a, b) printf("%d %d\n", a, b)
#define print3(a, b, c) printf("%d %d %d\n", a, b, c)
#define print4(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
#define prints(a) printf("%d ", a);
// read
#define read1(a) scanf("%d", &a)
#define read2(a, b) scanf("%d%d", &a, &b)
#define read3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define read4(a, b, c, d) scanf("%d%d%d%d", &a, &b, &c, &d)
 
 
 
 
 
int main(){
	
	int size, a, b, li, ld, ti, td;
	
	read1(size);
	
	vector<tuple<int, int>> vec;
	vi resps;
	
	forn(i, size){
		read2(a, b);
		if(a > b) swap(a, b);
		vec.push_back({a, b});
	}
	
	sort(vec.begin(), vec.end());
	
	// forn(i, size){
	// 	tie(li, ld) = vec[i];
	// 	print2(li, ld);
	// }
	
	tie(li, ld) = vec[0];
	
	forn(i, size){
		// print2(li, ld);
		tie(ti, td) = vec[i];
		
		// Si se encuentra en el rango
		if(li <= ti && ti <= ld){
			li = ti;
			
			if(td < ld){
				ld = td;
			}
		}
		else{
			resps.push_back(li);
			li = ti;
			ld = td;
		}
	}
	
	resps.push_back(li);
	
	print1(resps.size());
	
	forn(i, resps.size()){
		prints(resps[i]);
	}

	return 0;
}


 