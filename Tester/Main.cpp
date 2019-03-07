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

int size;
int DP[5000][3];
int AR[5005];

int dp(int i, int l, int min1, int min2)
{
	if (i > size)
		return 0;

	if (DP[i][l] != -1)
	{
		return DP[i][l];
	}
	else
	{
		// cout << AR[i] << " " << min1 << " " << min2 << endl;
		int au1 = (AR[i] <= min1) ? 1 : 0;
		int au2 = (AR[i] <= min2) ? 1 : 0;

		int nmin1 = min(min1, AR[i]);
		int nmin2 = min(min2, AR[i]);

		DP[i][l] = max(dp(i + 1, 1, nmin1, min2) + au1,
					   dp(i + 1, 2, min1, nmin2) + au2);

		cout << AR[i] << " " << l << " " << min1 << " " << min2 << " " << DP[i][l] << endl;

		return DP[i][l];
	}
}

int main()
{
	cin >> size;

	for (int i = 1; i <= size; ++i)
	{
		cin >> AR[i];
		DP[i][1] = -1;
		DP[i][2] = -1;
	}

	cout << max(dp(1, 1, 999999999, 999999999), dp(1, 2, 999999999, 999999999)) << endl;

	return 0;
}


