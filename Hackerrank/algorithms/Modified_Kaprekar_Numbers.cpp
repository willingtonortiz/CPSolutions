#include <bits/stdc++.h>

using namespace std;

bool isMKN(int n){
    long long temp = n;
    int a, b;
    string s = to_string(temp * temp);
    int osize = 0, fsize = 0;

    while(temp){
        temp /= 10;
        osize++;
    }

    temp = (long long)n * n;
    // cout << temp << endl;

    while(temp){
        temp /= 10;
        fsize++;
    }

    // printf("%d%d", osize, fsize);
    // cout << s.substr(0, osize - 1) << " - " << s.substr(osize - 1, osize) << endl;
    // cout << n << " => " << osize << " " << fsize << endl;

    // ab
    if(osize * 2 == fsize){
        if(s.substr(0, osize).size() == 0) a = 0;
        else a = stoi(s.substr(0, osize));
        // cout << n << " " << a << " " << s.substr(osize, osize) << endl;
        return a + stoi(s.substr(osize, osize)) == n;

    }else{
        // a
        if (s.substr(0, osize - 1).size() == 0) a = 0;
        else a = stoi(s.substr(0, osize - 1));
        // cout << n << " " << a << " " << s.substr(osize - 1, osize) << endl;

        return a + stoi(s.substr(osize - 1, osize)) == n;
    }
}

int main(){
    int l, r;
    bool found = false;

    scanf("%d%d", &l, &r);

    for(int i = l; i <= r; ++i){
        if(isMKN(i)){
            printf("%d ", i);
            found = true;
        }
    }

    if(!found){
        printf("INVALID RANGE");
    }
} // 2223 2728 4950 5050 7272 7777 9999

//1 9 45 55 99 297 703 999 2223 2728 4950 5050 7272 7777 9999 17344 22222 77778 82656 95121 99999
