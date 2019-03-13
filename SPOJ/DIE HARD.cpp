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

// If you step into air, your health increases by 3 and your armor increases by 2
// If you step into water, your health decreases by 5 and your armor decreases by 10
// If you step into fire, your health decreases by 20 and your armor increases by 5

int DP[1005][1005][3];

int min(int a, int b, int c)
{
	return min(a, min(b, c));
}

int max(int a, int b, int c)
{
	return max(a, max(b, c));
}

int dp(int heal, int armor, int type)
{
	if (heal <= 0 || armor <= 0)
		return 0;

	if (DP[heal][armor][type] != -1)
	{
		return DP[heal][armor][type];
	}
	else
	{
		// Air
		if (type == 0)
		{
			// water o fire
			return DP[heal][armor][type] = 1 + max(dp(heal - 5, armor - 10, 1), dp(heal - 20, armor + 5, 2));
		}
		// Water
		else if (type == 1)
		{
			// Air or fire
			return DP[heal][armor][type] = 1 + max(dp(heal + 3, armor + 2, 0), dp(heal - 20, armor + 5, 2));
		}
		// Fire
		else
		{
			// Air or water
			return DP[heal][armor][type] = 1 + max(dp(heal + 3, armor + 2, 0), dp(heal - 5, armor - 10, 1));
		}
	}
}

int dp(int heal, int armor)
{
	return max(dp(heal + 3, armor + 2, 0),
				   dp(heal - 5, armor - 10, 1),
				   dp(heal - 20, armor + 5, 2));
}

int main()
{
	int heal, armor, test;

	cin >> test;

	forn(i, test)
	{
		memset(DP, -1, sizeof(DP));

		cin >> heal >> armor;

		cout << dp(heal, armor) << endl;
	}

	return 0;
}
