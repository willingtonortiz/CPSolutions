#include <bits/stdc++.h>

using namespace std;

int main(){
    int feel;
    bool hate = true;
    string resp = "";

    cin >> feel;

    for(int i = 1; i <= feel; ++i){
        if(i == feel){
            if(hate){
                resp += "I hate it";
            }
            else{
                resp += "I love it";
            }
        }
        else{
            if(hate){
                resp += "I hate that ";
            }
            else{
                resp += "I love that ";
            }
        }
        hate = !hate;
    }

    cout << resp << endl;

    return 0;
}