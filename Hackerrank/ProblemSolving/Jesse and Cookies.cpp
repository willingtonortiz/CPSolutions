#include <bits/stdc++.h>

using namespace std;

int main(){
    int coo, swe, steps = 0, newcoo, a, b, temp;
    priority_queue<int, std::vector<int>, std::greater<int>> pq;

    cin >> coo >> swe;

    for(int i = 0; i < coo; ++i){
        cin >> temp;
        pq.push(temp);
        
    }

    while(pq.size() > 1){
        if(pq.top() >= swe) break;
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();

        newcoo = a + 2 * b;
        pq.push(newcoo);
        ++steps;
    }

    if(pq.top() >= swe){
        cout << steps << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}