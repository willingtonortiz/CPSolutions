#include <iostream>

using namespace std;

int main(){
    int l, r, c, bit, resp = 0;

    cin >> l >> r;

    bit = 0;
    c = (l ^ r);

    while(c != 0){
        bit++;
        c >>= 1;
    }

    while(bit != 0){
        resp <<= 1;
        resp |= 1;
        bit--;
    }

    // printf("%d", resp);

    cout << resp << endl;

    return 0;
}




