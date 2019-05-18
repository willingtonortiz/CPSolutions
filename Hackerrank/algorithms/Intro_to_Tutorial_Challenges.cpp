#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, sear;

    scanf("%d%d", &sear, &size);

    vector<int> arr(size);


    for(int i = 0; i < size; ++i){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] == sear){
            printf("%d", i);
            break;
        }
    }

    return 0;
}
