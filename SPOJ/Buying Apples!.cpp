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

int DT[105];
int DP[105][105];

// index en el que se encuentra
// Kilos que necesita
// devuelve el precio minimo
int dp(int index, int kilos)
{
	if (kilos == 0)
		return 0;

	if (kilos < 0 || index < 0)
		return 999999999;
	// Puede comprar index kilos por DT[index] precio, si se puede, o no y comprar del siguiente

	if (DP[index][kilos] != -1)
	{
		return DP[index][kilos];
	}
	else
	{
		// Si no hay stock
		if (DT[index] == -1)
		{
			return DP[index][kilos] = dp(index - 1, kilos);
		}

		// Tomar DT[index] kilos o no tomar
		return DP[index][kilos] = min(DT[index] + dp(index, kilos - (index + 1)),
									  dp(index - 1, kilos));
	}
}

int main()
{
	int test, frie, kilo, temp;

	cin >> test;

	forn(i, test)
	{
		memset(DP, -1, sizeof(DP));

		cin >> frie >> kilo;

		forn(j, kilo)
		{
			cin >> DT[j];
		}

		temp = dp(kilo - 1, kilo);

		if (temp >= 999999)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << temp << endl;
		}
	}

	return 0;
}
