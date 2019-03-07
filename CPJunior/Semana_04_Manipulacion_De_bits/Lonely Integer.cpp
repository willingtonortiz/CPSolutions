#include <iostream>

using namespace std;

int main(){
    int size, temp, resp = 0;

    cin >> size;

    for(int i = 0; i < size; ++i){
        cin >> temp;
        resp = (resp ^ temp);
    }

    cout << resp << endl;

    return 0;
}