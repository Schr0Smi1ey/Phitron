#include<bits/stdc++.h>  // This includes the standard C++ library for input/output operations.

using namespace std;

// Define a class 'Edge' to represent edges in the graph.
class Edge
{
public:
    int u, v, w;  // 'u' and 'v' represent the nodes connected by the edge, and 'w' is the weight of the edge.

    // Constructor to initialize the edge with values.
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
// Comparison function to sort edges based on their weights.
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

vector<int> parent;  // A vector to represent the parent nodes in a disjoint-set data structure.

// Function to find the ultimate parent (representative) of a node with path compression.
int findUPar(int node)
{
    if (parent[node] == node)  // If the node is its own parent, it's a representative.
        return node;
    
    // Otherwise, use path compression to find the ultimate parent.
    return parent[node] = findUPar(parent[node]);
}

// Main function
signed main()
{
    int n, e;  // 'n' is the number of nodes, and 'e' is the number of edges. Read from input.
    cin >> n >> e;

    vector<Edge> edgeList;  // A vector to store all the edges in the graph.

    parent.resize(n + 1);  // Resize the 'parent' vector to accommodate 'n' nodes.

    // Initialize each node as its own parent in the disjoint-set data structure.
    for (int i = 1; i <= n; i++)
        parent[i] = i;

    // Read the edges from input and store them in 'edgeList'.
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    vector<Edge> ans;  // A vector to store the edges of the minimum spanning tree (MST).

    // Sort the edges in 'edgeList' based on their weights using the custom comparison function 'cmp'.
    sort(edgeList.begin(), edgeList.end(), cmp);

    // Kruskal's algorithm for finding the MST.
    for (auto val : edgeList)
    {
        int pu = findUPar(val.u);  // Find the ultimate parent of node 'val.u'.
        int pv = findUPar(val.v);  // Find the ultimate parent of node 'val.v'.

        if (pu != pv)  // If the nodes are not in the same disjoint-set (tree), add this edge to the MST.
        {
            ans.push_back(val);  // Add the edge to the MST.
            parent[pu] = pv;     // Union the two sets by making one the parent of the other.
        }
    }

    // Print the edges of the MST.
    for (auto x : ans)
    {
        cout << x.u << " " << x.v << " " << x.w << endl;
    }
}