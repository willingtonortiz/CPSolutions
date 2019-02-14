#include <bits/stdc++.h>

using namespace std;

struct DSU{
    vector<int> parent;
    vector<int> rnk;

    DSU(int size){
        parent = vector<int>(size + 1);
        rnk = vector<int>(size + 1);

        for(int i = 0; i < size + 1; ++i){
            makeSet(i);
        }
    }

    void makeSet(int u){
        parent[u] = u;
        rnk[u] = 1;
    }

    int findSet(int u){
        if(parent[u] == u) return u;
        return parent[u] = findSet(parent[u]);
    }

    void unionSets(int u, int v){
        int uset = findSet(u);
        int vset = findSet(v);

        if(uset != vset){
            if(rnk[uset] < rnk[vset]) swap(uset, vset);

            parent[vset] = uset;

            rnk[uset] += rnk[vset];
        }
    }
};

int main()
{
    int queries, a, b;
    
    cin >> queries;

    DSU dsu(2 * queries);

    for(int i = 0; i < queries; ++i){
        cin >> a >> b;

        dsu.unionSets(a, b);
    }

    int maxi = 1, mini = 2 * queries;

    for(int i = 1; i <= 2 * queries; ++i){
        if(dsu.rnk[dsu.findSet(i)] > 1){
            if(maxi < dsu.rnk[dsu.findSet(i)]){
                maxi = dsu.rnk[dsu.findSet(i)];
            }
            
            if(mini > dsu.rnk[dsu.findSet(i)]){
                mini = dsu.rnk[dsu.findSet(i)];
            }
        }
    }

    cout << mini << " " << maxi << endl;

    return 0;
}
