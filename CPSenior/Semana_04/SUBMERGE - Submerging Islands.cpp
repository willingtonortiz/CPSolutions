#include <bits/stdc++.h>

using namespace std;

// STRONG CONNECTED COMPONENTS – DIRECTED GRAPHS

#define INF 999999999

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;


vvi r; // Graph with reversed edges
vi color; // 0: Not discovered, 1: Discovered, 2: Processed
vi st; // Stack used on first pass
// SCC information
vi scc; // scc[i] : SCC ID to which node i belongs
int nSCC; // Number of SCC the graph has

int n;
vvi g;

/*
void dfs_visit(int v, int pass) // v: Current node
{
    color[v] = 1; // Mark node v as discovered
    // Programming Competition Compendium 1st Ed. (Beta)
    // Page 115 of 191
    int sz = (pass == 1)? g[v].size() : r[v].size(); // Number of neighbors
    for(int i = 0; i < sz; i++) // For each neighbor of v..
    {
        int u = (pass == 1)? g[v][i] : r[v][i]; // Neighbor u. Edge v -> u
        if(color[u] == 0) // If the node u has not been discovered..
            dfs_visit(u, pass); // Visit node u
    }

    if(pass == 1) // If this is the 1st pass..
        st.push_back(v); // Add the processed node v to the stack
    else // If this is the 2nd pass..
        scc[v] = nSCC; // Update the SCC index of node v
}

void dfs()
{
    color = vi(n, 0); // No node has been discovered
    st.clear(); // Clean the stack
    for(int i = 0; i < n; i++) // For each node i..
        if(color[i] == 0) // If the node i has not been discovered..
            dfs_visit(i, 1); // Visit the connected component (1st time)

    color = vi(n, 0); // No node has been discovered
    scc = vi(n, -1); // Clean scc array
    nSCC = 0; // No SCC

    for(int i = n - 1; i >= 0; i--) // For each node i (in stack order)..
        if(color[st[i]] == 0) // If the node i has not been discovered..
        {
            dfs_visit(st[i], 2); // Visit the connected component (2nd time)
            nSCC++; // Number of SCC increments
        }
}


// ARTICULATION BRIDGES – UNDIRECTED GRAPHS

int dfs_cont; // Counter
vi dfs_num; // Value of dfs_cont when a node is visited for the first time
vi dfs_low; // Lowest dfs_num reachable from a node

void dfs_visit(int v, int p) // v: Current node, p: Previous node
{
    dfs_num[v] = dfs_low[v] = dfs_cont++; // First visit to the node v
    for(int i = 0; i < (int)g[v].size(); i++) // For each neighbor of v..
    {
        int u = g[v][i]; // Neighbor u. Edge v -> u
        if(dfs_num[u] < 0) // If the node u has not been discovered..
        {
            dfs_visit(u, v); // Visit node u
            if(dfs_low[u] > dfs_num[v]) // If the only way to reach u is through v
                cout << v << " " << u; // Edge v -> u is a bridge

            dfs_low[v] = min(dfs_low[v], dfs_low[u]); // Update dfs_low
        }
        else if(u != p) // If the node u is not the predecessor..
            dfs_low[v] = min(dfs_low[v], dfs_num[u]); // Update dfs_low
    }
}

void dfs()
{
    dfs_cont = 0; // Counter starts at 0
    dfs_num = vi(n, -1); // No node has been discovered
    dfs_low = vi(n, INF); // The nodes are unreachable
    for(int i = 0; i < n; i++) // For each node i..
    if(dfs_num[i] < 0) // If the node i has not been discovered..
    dfs_visit(i, -1); // Visit the connected component
}
*/

// ARTICULATION POINTS – UNDIRECTED GRAPHS
 
int dfs_cont; // Counter
vi dfs_num; // Value of dfs_cont when a node is visited for the first time
vi dfs_low; // Lowest dfs_num reachable from a node
int dfs_root; // dfs_visit initial node
int children; // Number of neighbors of root node
// Information about Articulation Point (AP)
vb isAP; // isAP[i] : check if the node is an AP

void dfs_visit(int v, int p) // v: Current node, p: Previous node
{
    dfs_num[v] = dfs_low[v] = dfs_cont++; // First visit to the node v
    for(int i = 0; i < (int)g[v].size(); i++) // For each neighbor of v..
    {
        int u = g[v][i]; // Neighbor u. Edge v -> u
        if(dfs_num[u] < 0) // If the node u has not been discovered..
        {
            if(v == dfs_root) // If node v is the root..
                children++; // Count the number of children
            dfs_visit(u, v); // Visit node u

            if(dfs_low[u] >= dfs_num[v]) // If the only way to reach u is through v
                isAP[v] = true; // Node v is an AP

            dfs_low[v] = min(dfs_low[v], dfs_low[u]); // Update dfs_low
        }
        else if(u != p) // If the node u is not the predecessor..
            dfs_low[v] = min(dfs_low[v], dfs_num[u]); // Update dfs_low
    }
}

void dfs()
{
    dfs_cont = 0; // Counter starts at 0
    dfs_num = vi(n, -1); // No node has been discovered
    dfs_low = vi(n, INF); // The nodes are unreachable
    isAP = vb(n, false); // No node is an AP at the beginning
    for(int i = 0; i < n; i++) // For each node i..
        if(dfs_num[i] < 0) // If the node i has not been discovered..
        {
            dfs_root = i; // Store information of root node
            children = 0; // Node starts with 0 children
            dfs_visit(i, -1); // Visit the connected component
            isAP[i] = (children > 1); // The root is an AP if it has > 1 child
        }
}

int main(){
    int isl, bri, a, b;

    while(true){
        cin >> isl >> bri;
        if(isl == 0 && bri == 0) break;
        
        n = isl;
        g = vvi(isl, vi());

        for(int i = 0; i < bri; ++i){
            cin >> a >> b;

            g[a - 1].push_back(b - 1);
            g[b - 1].push_back(a - 1);
        }

        dfs();

        int count = 0;

        for(int i = 0; i < isAP.size(); ++i){
            if(isAP[i]) count++;
        }

        cout << count << endl;
    }

    return 0;
}