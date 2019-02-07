#include <bits/stdc++.h>

using namespace std;

int main() {
  int tests, people;

  cin >> tests;

  for (int i = 0; i < tests; ++i) {
    cin >> people;

    cout << (people * (people - 1)) / 2 << endl;
  }

  return 0;
}

