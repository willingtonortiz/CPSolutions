	#include <bits/stdc++.h>

using namespace std;

int main() {
  int sets, px, py, qx, qy, distx, disty;

  scanf("%d", &sets);

  for (int i = 0; i < sets; ++i) {
    scanf("%d %d %d %d", &px, &py, &qx, &qy);

    distx = qx - px;
    disty = qy - py;

    distx *= 2;
    disty *= 2;

    cout << px + distx << " " << py + disty << endl;
  }

  return 0;
}

