#include <bits/stdc++.h>

using namespace std;

// int dolars[] = {1, 5, 10, 20, 100};

int main()
{
	long long money, resp = 0, temp;

	cin >> money;

	if (money >= 100LL)
	{
		temp = money / 100LL;
		resp += temp;
		money -= temp * 100LL;
	}
	if (money >= 20LL)
	{
		temp = money / 20LL;
		resp += temp;
		money -= temp * 20LL;
	}
	if (money >= 10LL)
	{
		temp = money / 10LL;
		resp += temp;
		money -= temp * 10LL;
	}
	if (money >= 5LL)
	{
		temp = money / 5LL;
		resp += temp;
		money -= temp * 5LL;
	}
	if (money >= 1LL)
	{
		temp = money / 1LL;
		resp += temp;
		money -= temp * 1LL;
	}

	cout << resp << endl;
	return 0;
}
