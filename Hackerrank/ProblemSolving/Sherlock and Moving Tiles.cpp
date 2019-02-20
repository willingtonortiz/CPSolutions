#include <bits/stdc++.h>

using namespace std;

int main() {
  long long side, v1, v2, mini, maxi, queries, query;
  double resp;

  cin >> side >> v1 >> v2;
  cin >> queries;

  mini = min(v1, v2);
  maxi = max(v1, v2);

  for (int i = 0; i < queries; ++i) {
    cin >> query;

    resp = ((double)side * sqrt(2) - sqrt(2 * query)) / (double)(maxi - mini);

    if(resp >= 0){
        printf("%lf\n", resp);
    }
    else{
        printf("%lf\n", 0.0000);
    }
  }

  return 0;
}