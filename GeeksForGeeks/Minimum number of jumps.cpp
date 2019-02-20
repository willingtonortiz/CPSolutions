#include <iostream>

using namespace std;

int arr[10000000];
int DP[10000000];

// El menor número de saltos de hasta una posición, es el menor entre
// el valor que tenía esa posición (00) y el minimo anterior + 1, por el salto

int dp(int fin){
    if(arr[0] == 0) return -1;
    for(int i = 1; i <= fin; ++i){
        for(int j = 0; j < i; ++j){
            if(j + arr[j] >= i){
                DP[i] = min(DP[i], DP[j] + 1);
            }
        }
    }
    if(DP[fin] >= 10000000) return -1;
    return DP[fin];
}

int main() {
    int tests, size;
    
    cin >> tests;
    
    for(int i = 0; i < tests; ++i){
        cin >> size;
        
        for(int i = 0; i < size; ++i){
            cin >> arr[i];
            DP[i] = 999999999;
        }
        DP[0] = 0;
        
        cout << dp(size - 1) << endl;
    }
	
	return 0;
}