#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
// Find the representative of the set to which x belongs
int findUPar(int node)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findUPar(parent[node]); // Recursively find the root without path compression
}

int main() {
    int n, m; // n is the number of elements, m is the number of union operations
    cin >> n >> m;
    parent.resize(n+1);
    for(int i=0;i<=n;i++)
    parent[i] = i;
    while(m--)
    {
        int u, v;
        cin >> u >> v;
        // Without union operation, just find the roots of elements
        int rootU = findUPar(u);
        int rootV = findUPar(v);
        if (rootU != rootV) {
            // If they have different roots, they are in different components
            parent[rootU] = rootV; // Merge them by updating one's parent to the other's root
        }
    }
    
    // Count the number of distinct roots, which represents the number of connected components
    int components = 0;
    for (int i = 0; i < n; i++) 
    {
        if (parent[i] == i) 
        {
            components++;
        }
    }
    
    cout << "Number of connected components: " << components << endl;
    
    return 0;
}
