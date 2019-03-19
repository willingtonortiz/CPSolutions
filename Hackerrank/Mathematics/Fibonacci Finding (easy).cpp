#include <bits/stdc++.h>

using namespace std;

// int MAT[2][2] = {1, 1, 1, 0};

long long **MAT;

// void printMAT(long long **mat) {
//   for (int i = 0; i < 2; ++i) {
//     for (int j = 0; j < 2; ++j) {
//       printf("%lld ", mat[i][j]);
//     }
//     printf("\n");
//   }
// }

long long **multMat(long long **a, long long **b) {
  long long m, n, p, q;

  m = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % 1000000007LL;
  n = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % 1000000007LL;
  p = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % 1000000007LL;
  q = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % 1000000007LL;

  a[0][0] = m;
  a[1][0] = n;
  a[0][1] = p;
  a[1][1] = q;
  return a;
}

long long **matrixExp(int n) {
  if (n == 1)
    return MAT;
  long long **temp = matrixExp(n / 2);

  long long **resp = new long long *[2];
  resp[0] = new long long[2];
  resp[1] = new long long[2];
  resp[0][0] = temp[0][0];
  resp[0][1] = temp[0][1];
  resp[1][0] = temp[1][0];
  resp[1][1] = temp[1][1];

  resp = multMat(resp, resp);

  if (n % 2 == 1)
    resp = multMat(resp, MAT);
  return resp;
}

int main() {
  // printf("Hola mundo");
  MAT = new long long *[2];
  MAT[0] = new long long[2];
  MAT[1] = new long long[2];
  MAT[0][0] = 1;
  MAT[0][1] = 1;
  MAT[1][0] = 1;
  MAT[1][1] = 0;

  long long **fib = new long long *[2];
  fib[0] = new long long[2];
  fib[1] = new long long[2];
  //   fib[0][0] = 10;
  //   fib[0][1] = 1;
  //   fib[1][0] = 1;
  //   fib[1][1] = 9;

  // for(int i = 2; i < 10; ++i){
  //     printMAT(matrixExp(i));
  //     printf("\n");
  // }

  //   fib = multMat(fib, matrixExp(5));

  //   printMAT(fib);

  int test, a, b, n;

  scanf("%d", &test);
  // printf("Hola mundo");

  for (int i = 0; i < test; ++i) {
    scanf("%d%d%d", &a, &b, &n);

    // printf("%d %d %d", a, b, n);

    if (n == 0)
      printf("%d\n", a);
    else if (n == 1)
      printf("%d\n", b);
    else if (n == 2)
      printf("%lld\n", ((long long)a + (long long)b) % 1000000007LL);
    else {
      fib[0][0] = a + b;
      fib[0][1] = b;
      fib[1][0] = b;
      fib[1][1] = a;

      fib = multMat(fib, matrixExp(n - 2));

      printf("%lld\n", fib[0][0]);
    }
  }

  return 0;
}
