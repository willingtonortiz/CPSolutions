#include <bits/stdc++.h>

using namespace std;

// Types
typedef unsigned long long ull;
typedef long long ll;
// vector
typedef vector<string> vecs;
typedef vector<int> veci;
typedef vector<veci> vecveci;
typedef pair<int, int> pairii;
typedef pair<string, int> pairsi;
typedef pair<int, string> pairis;
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

int main()
{
    int test, size, a, b;
    long long unhappy;
    read1(test);

    forn(i, test){
        read1(size);
        unhappy = 0;

        veci happy(size);

        forn(j, size){
            read2(a, b);

            happy[j] = a + b;
            unhappy += b;
        }

        sortvec(happy);

        print1(happy[size - 1] + happy[size - 2] - unhappy);
    }



	return 0;
}
