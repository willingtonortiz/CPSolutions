#include <bits/stdc++.h>

using namespace std;

int main(){
    int test, a, b;

    scanf("%d", &test);

    for(int i = 0; i < test; ++i){
        scanf("%d%d", &a, &b);

        a = ceil(sqrt(a));
        b = floor(sqrt(b));

        printf("%d\n", b - a + 1);
    }


    return 0;
}
