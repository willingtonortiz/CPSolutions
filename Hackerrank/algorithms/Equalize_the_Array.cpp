#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, temp, maxi = 0;

    scanf("%d", &size);

    map<int, int> myMap;

    for(int i = 0; i < size; ++i){
        scanf("%d", &temp);

        myMap[temp]++;
        maxi = max(maxi, myMap[temp]);
    }

    printf("%d", size - maxi);

    return 0;
}
