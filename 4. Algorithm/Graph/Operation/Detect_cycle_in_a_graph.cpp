#include<bits/stdc++.h>
using namespace std;
const int MAX_VERTICES = 1e3 + 5;
vector<int> adjacencyList[MAX_VERTICES]; // Adjacency list representation of the graph
bool visited[MAX_VERTICES]; // Array to keep track of visited nodes

// Depth First Search (DFS) function to detect cycles in the graph
bool dfs(int node, int parent = -1) 
{
    visited[node] = true; // Mark the current node as visited
    bool cycleExists = false; // Variable to track if a cycle exists

    for (auto adjacent : adjacencyList[node]) 
    {
        if (adjacent == parent)
            continue; // Skip the edge to the parent node

        if (visited[adjacent])
            return true; // If the adjacent node is visited and not the parent, a cycle is detected

        cycleExists |= dfs(adjacent, node); // Recursive DFS call for adjacent nodes
    }
    return cycleExists;
}

signed main() 
{
    int numVertices, numEdges;
    cin >> numVertices >> numEdges;

    // Input edges and build the adjacency list
    for (int i = 0; i < numEdges; i++) 
    {
        int u, v;
        cin >> u >> v;
        adjacencyList[u].push_back(v); // Add edge from u to v
        adjacencyList[v].push_back(u); // Add edge from v to u (since it's an undirected graph)
    }

    bool isCycle = false; // Flag to indicate if a cycle is detected
    int numCycle = 0; // Count of cycles in the graph

    // Iterate through all vertices and perform DFS if not visited (it will cover all the connected components)
    for (int i = 1; i <= numVertices; i++) 
    {
        if (!visited[i]) {
            bool ans = dfs(i); // Perform DFS from the current unvisited vertex
            isCycle |= ans; // Update isCycle flag with DFS result
            if (ans)
                numCycle++; // If a cycle is detected, increment cycle count
        }
    }

    // Output the results
    if (isCycle)
        cout << "Cycle Detected!" << endl;
    else
        cout << "No Cycle Detected!" << endl;

    cout << "Total Number of Cycles in this graph: " << numCycle;
    return 0;
}
