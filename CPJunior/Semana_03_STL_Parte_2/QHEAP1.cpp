#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries, a , b;
    priority_queue<int, std::vector<int>, std::greater<int>> pq;
    priority_queue<int, std::vector<int>, std::greater<int>> del;

    cin >> queries;

    for(int i = 0; i < queries; ++i){
        cin >> a;

        if(a == 1){
            cin >> b;
            pq.push(b);
        }
        else if(a == 2){
            cin >> b;

            del.push(b);
        }
        else{

            while((!del.empty()) && (pq.top() == del.top())){
                pq.pop();
                del.pop();
            }

            cout << pq.top() << endl;
        }
    }    

    return 0;
}
