#include <bits/stdc++.h>

using namespace std;

int main(){
    int count;
    long long minX, maxX, minY, maxY, x, y;
    double resp = 0;

    cin >> count;

    for(int i = 0; i < count; ++i){
        cin >> x >> y;
        if(i == 0){
            minX = maxX = x;
            minY = maxY = y;
        }
        else{
            if(minX > x) minX = x;
            if(maxX < x) maxX = x;
            if(minY > y) minY = y;
            if(maxY < y) maxY = y;
        }
    }

    resp = max(resp, (double)(maxX - minX));
    resp = max(resp, (double)(maxY - minY));
    resp = max(resp, sqrt(minX * minX + maxY * maxY));
    resp = max(resp, sqrt(maxX * maxX + maxY * maxY));
    resp = max(resp, sqrt(minX * minX + minY * minY));
    resp = max(resp, sqrt(maxX * maxX + minY * minY));

    printf("%lf", resp);

    return 0;
}


