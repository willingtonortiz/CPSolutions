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

// For
#define forn(i, n) for(int i = 0; i < n; ++i)
#define fornr(i, n) for(int i = n - 1; i >= 0; --i)
#define fornm(i, a, b) for(int i = a; i <= b; ++i)
#define fornmr(i, a, b) for(int i = a; i >= b; --i)
#define formap(it, map) for(auto it = map.begin(); it != map.end(); ++it)

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
	int test, len, size, temp;
	string s;

	read1(test);


	forn(i, test){
		read2(len, size);

		vector<pair<int, string>> data(size);

		forn(j, size){
			cin >> s;
			temp = 0;

			map<char, int> coun;

			for(int k = s.size() - 1; k >= 0; --k){

				formap(it, coun){
					if(s[k] > (*it).first){
						temp += (*it).second;
					}
				}

				coun[s[k]]++;
			}

			data[j] = make_pair(temp, s);
		}

		stable_sort(data.begin(), data.end(), [](pair<int, string> a, pair<int, string> b){
			return a.first < b.first;
		});

		forn(j, size){
			cout << data[j].second << "\n";
		}

		if(i + 1 != test) cout << "\n";
	}

	return 0;
}
