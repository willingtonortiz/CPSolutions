#include <bits/stdc++.h>

using namespace std;

int sumDigits(int num){
    int sum = 0;
    while(num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;

    cin >> num;

    vector<int> divisors;

    for(int i = 1; i * i <= num; ++i){
        if(num % i == 0){
            divisors.push_back(i);
            if(i * i != num){
                divisors.push_back(num / i);
            }
        }
    }    

    sort(divisors.begin(), divisors.end(), [](int a, int b){
        return a < b;
    });

    int max = 0, resp = 0;


    for(int i = 0; i < divisors.size(); ++i){
        if(sumDigits(divisors[i]) > max){
            max = sumDigits(divisors[i]);
            resp = divisors[i];
        }
        else if(sumDigits(divisors[i]) == max){
            resp = min(divisors[i], resp);
        }
    }

    cout << resp << endl;

    return 0;
}
