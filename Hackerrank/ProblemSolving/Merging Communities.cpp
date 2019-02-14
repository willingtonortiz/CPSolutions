#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class DSU{
public:
    vector<int> parent;
    vector<int> rnk;

    DSU(int size){
        parent = vector<int>(size + 1);
        rnk = vector<int>(size + 1);

        for(int i = 0; i < size + 1; ++i){
            makeSet(i);
        }
    }

    void makeSet(int i){
        parent[i] = i;
        rnk[i] = 1;
    }

    int findSet(int i){ 
        if (i == parent[i]) return i;
        return parent[i] = findSet(parent[i]);
    } 
    
    // Naive implementation of union() 
    void unionSets(int x, int y){ 
        int xset = findSet(x); 
        int yset = findSet(y); 

        if(xset != yset){
            if(rnk[xset] < rnk[yset]) swap(xset, yset);

            parent[yset] = xset;

            rnk[xset] += rnk[yset];
        }
    } 
};

int main() {
    int people, queries, a, b;
    char cha;

    cin >> people >> queries;

    DSU dsu(people);

    for(int i = 0; i < queries; ++i){
        cin >> cha;

        if(cha == 'M'){
            cin >> a >> b;
            dsu.unionSets(a, b);
        }
        else{
            cin >> a;
            
            cout << dsu.rnk[dsu.findSet(a)] << endl;
        }
    }

    return 0;
}
