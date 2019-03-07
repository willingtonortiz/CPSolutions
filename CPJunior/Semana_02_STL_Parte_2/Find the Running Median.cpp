#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, temp, a, b;
    double middle = 0.0;
    priority_queue<int, std::vector<int>, std::greater<int>> minH;
    priority_queue<int> maxH;
    
    cin >> size;

    for(int i = 0; i < size; ++i){
        cin >> temp;

        if(temp >= middle){
            minH.push(temp);
            // cout << "fi" << endl;
        }
        else{
            maxH.push(temp);
            // cout << "se" << endl;
        }

        // cout  << "sizes: " << minH.size() << " # " << maxH.size() << endl;

        if(minH.size() > maxH.size() + 1){
            maxH.push(minH.top());
            minH.pop();
        }
        else if(minH.size() + 1 < maxH.size()){
            minH.push(maxH.top());
            maxH.pop();   
        }
        
        if(minH.size() > maxH.size()){
            middle = minH.top();
        }
        else if(minH.size() < maxH.size()){
            middle = maxH.top();
        }
        else{
            middle = (double)(minH.top() + maxH.top()) / 2.0;
        }


        // if(minH.size() > 0) cout << minH.top() << " ";
        // if(maxH.size() > 0) cout << maxH.top() << " ";
        cout << middle << endl;
    }

    return 0;
}
