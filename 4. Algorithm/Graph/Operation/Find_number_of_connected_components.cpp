#include<bits/stdc++.h>
using namespace std;

const int MAX_NODES = 1e3 + 5;  // Maximum number of nodes

vector<int> adjacencyList[MAX_NODES];  // Adjacency list for storing graph information
bool visited[MAX_NODES];  // To keep track of visited nodes

// Depth-First Search traversal
void dfs(int node)
{
    visited[node] = true;

    cout << node << " ";

    // Traverse all adjacent nodes of the current node
    for(auto adjacentNode : adjacencyList[node])
    {
        if(!visited[adjacentNode])
        {
            // Mark the adjacent node as visited and explore further
            dfs(adjacentNode);
        }
    }
}

int main()
{
    int numNodes, numEdges;  // Number of nodes and edges in the graph
    
    // Input the number of nodes and edges
    cin >> numNodes >> numEdges;
    
    // Input the edges and build the adjacency list
    for(int i = 0; i < numEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);  // Assuming an undirected graph
    }

    int connectedComponents = 0;  // To count the number of connected components
    
    // Iterate through all nodes to find connected components
    for(int i = 1; i <= numNodes; i++)
    {
        if(!visited[i])
        {
            // Increment the connected components count and perform DFS
            connectedComponents++;
            cout << "Connected Components " << connectedComponents <<": ";
            dfs(i);
            cout << endl;
        }
    }

    // Display the number of connected components
    cout << "Total Number of Connected Components: " << connectedComponents << endl;

    return 0;
}


/*
    Logic and Explanation : 

        For each unvisited node encountered, the DFS function is called on that node. 
        This means that the DFS function will explore all nodes reachable from the current unvisited node.
        After a full DFS traversal from a starting node, the loop iterates to the next 
        unvisited node means forming another connected component(otherwise it must be visited before) of this graph hence we will incrementing the connected components counting.
        The count of connected components (connectedComponents) is incremented each time a new DFS traversal begins.
*/