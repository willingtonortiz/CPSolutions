#include <bits/stdc++.h>

using namespace std;

int main(){
    long long resp;
    int fac;
    string marks;

    cin >> resp >> marks;
    fac = marks.size();

    for(int i = resp - fac; i > 0; i -= fac){
        resp *= i;
    }

    cout << resp << endl;

    return 0;
}