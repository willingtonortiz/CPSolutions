#include <bits/stdc++.h>

using namespace std;

struct Stuffing{
    int amount;
    int stuffingCost;
    int doughCost;
    int price;

    Stuffing(){}

    Stuffing(int a, int b, int c, int d){
        amount = a;
        stuffingCost = b;
        doughCost = c;
        price = d;
    }
};

long long DP[1005][12][105];
int dough, stuffing, noDough, noPrice;
vector<Stuffing> vec;

long long dp(int dou, int stu, int rem){
    if(stu > stuffing) return 0;

    if(DP[dou][stu][rem] != -1) return DP[dou][stu][rem];
    else{
        // Se puede preparar
        if(dou >= vec[stu].doughCost && rem >= vec[stu].stuffingCost){
            long long asd = max(
                vec[stu].price + dp(dou - vec[stu].doughCost, stu, rem - vec[stu].stuffingCost),
                dp(dou, stu + 1, vec[stu + 1].amount)
            );

            // cout << "[" << dou << "][" << stu << "][" << rem << "]: " << asd << endl;
            return DP[dou][stu][rem] = asd;
        }
        // No se puede preparar
        else{
            long long asd = dp(dou, stu + 1, vec[stu + 1].amount);

            // cout << "[" << dou << "][" << stu << "][" << rem << "]: " << asd << endl;
            return DP[dou][stu][rem] = asd;
        }
    }
}


int main(){
    int a, b, c, d;
    for(int i = 0; i < 1005; ++i) for(int j = 0; j < 12; ++j) for(int k = 0; k < 105; ++k) DP[i][j][k] = -1LL;

    cin >> dough >> stuffing >> noDough >> noPrice;

    for(int i = 0; i < stuffing; ++i){
        cin >> a >> b >> c >> d;
        vec.push_back(Stuffing(a, b, c, d));
    }

    vec.push_back(Stuffing(1, 0, noDough, noPrice));
    vec.push_back(Stuffing(1, 0, noDough, noPrice));

    cout << dp(dough, 0, vec[0].amount) << endl;

    return 0;
}
