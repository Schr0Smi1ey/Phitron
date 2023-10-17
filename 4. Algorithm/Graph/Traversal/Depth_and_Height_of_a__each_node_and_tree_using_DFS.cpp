#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

vector<int> adj[N]; // Array of vectors to store the adjacency list.
bool visited[N];     // Boolean array to track visited nodes during DFS.
int depth[N], height[N]; // Arrays to store depth and height of each node.

void dfs(int u)
{
    visited[u] = true; // Mark the current node as visited.
    
    for(auto v : adj[u]) // Loop through neighbors of the current node.
    {
        if(!visited[v]) // If the neighbor is not visited yet.
        {
            depth[v] = depth[u] + 1; // Calculate depth of the neighbor.
            dfs(v); // Recursively visit the neighbor.
            height[u] = max(height[u], height[v] + 1); // Calculate height of the current node.
        }
    }
}

signed main()
{
    int n, m;
    cin >> n >> m; // Input the number of vertices (n) and number of edges (m).

    for(int i = 0; i < m; i++) // Loop to input edge information m times.
    {
        int u, v;
        cin >> u >> v; // Input starting vertex (u) and ending vertex (v) of an edge.
        adj[u].push_back(v); // Add v to the adjacency list of u.
        adj[v].push_back(u); // If the graph is undirected, add u to the adjacency list of v.
    }

    dfs(1); // Start Depth-First Search from node 1.

    // Calculate maximum depth and height of the tree.
    int tree_depth = INT_MIN, tree_height = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        tree_depth = max(tree_depth, depth[i]);
        tree_height = max(tree_height, height[i]);
    }

    // Print depth and height of each node.
    for(int i = 1; i <= n; i++)
    {
        cout << "Depth of Node " << i << ": " << depth[i] << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << "Height of Node " << i << ": " << height[i] << endl;
    }

    // Print overall depth and height of the tree.
    cout << endl << "Depth of the tree is: " << tree_depth << endl;
    cout << "Height of the tree is: " << tree_height << endl;
    
    return 0;
}


/*
    Detailed Explantion : 

    depth[u] = depth[u] + 1;
    
    This line is responsible for calculating the depth of the current node's neighbor. 
    The depth of a node represents its distance from the root node in the tree. 
    When traversing a tree using DFS, each time we move to a child node, its depth increases by 1. 
    So, depth[u] is the depth of the current node, and depth[v] (where v is a neighbor of u) is the depth of the neighbor node.
    By using the syntax depth[u] = depth[u] + 1;, we are incrementing the depth of the neighbor v by 1 and assigning it to the current node's depth[u]. 
    This is how the code calculates the depth of the neighbor node relative to the current node.

    height[u] = max(height[u], height[v] + 1);
    
    This line calculates the height of the current node using the height of its neighbors. 
    The height of a node represents the maximum distance from that node to a leaf node in its subtree. 
    When calculating the height of a node, we need to consider all its child nodes and choose the maximum height among them.
    
    Here's how this line works:

    height[u] is the height of the current node.
    height[v] + 1 is the height of the neighbor node v plus 1, representing the height of the subtree rooted at v plus the edge connecting u and v.
    max(height[u], height[v] + 1) takes the maximum value between the current height of node u and the calculated height of node v. This accounts for the possibility that v might have a taller subtree than u.
    By using this syntax, the code ensures that the height of the current node considers the maximum height among its child nodes.
*/