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
typedef stack<int> si;
typedef stack<char> sc;
typedef stack<string> ss;
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

int main()
{
	int cila, cilb, cilc, ha = 0, hb = 0, hc = 0, temp;

	si stacka, stackb, stackc;

	read3(cila, cilb, cilc);

	vi veca(cila), vecb(cilb), vecc(cilc);

	forn(i, cila)
	{
		cin >> temp;
		ha += temp;
		veca[i] = temp;
	}

	fornr(i, cila)
	{
		stacka.push(veca[i]);
	}

	forn(i, cilb)
	{
		cin >> temp;
		hb += temp;
		vecb[i] = temp;
	}

	fornr(i, cilb)
	{
		stackb.push(vecb[i]);
	}

	forn(i, cilc)
	{
		cin >> temp;
		hc += temp;
		vecc[i] = temp;
	}

	fornr(i, cilc)
	{
		stackc.push(vecc[i]);
	}

	while (!(ha == hb && hb == hc))
	{
		if(ha > hb || ha > hc && !stacka.empty()){
			temp = stacka.top();
			stacka.pop();
			ha -= temp;
		}
		else if(hb > ha || hb > hc && !stackb.empty()){
			temp = stackb.top();
			stackb.pop();
			hb -= temp;
		}
		else if(hc > ha || hc > hb && !stackc.empty()){
			temp = stackc.top();
			stackc.pop();
			hc -= temp;
		}
	}

	print1(ha);

	return 0;
}
