#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N]; // Array of vectors to store the adjacency list.

// Recursive Approach
bool visited[N];     // Boolean array to track visited nodes during DFS.
void dfs(int u)
{
    visited[u] = true; // Mark the current node as visited.
    cout << "Visited Node: " << u << endl; // Print the visited node.

    for(auto v : adj[u]) // Loop through neighbors of the current node.
    {
        if(!visited[v]) // If the neighbor is not visited yet.
            dfs(v);     // Recursively visit the neighbor.
    }
}

// DFS using stack
bool visited2[N];
void DFS(int u)
{
    stack<int> stk;  // Push the starting vertex onto the stack.
    stk.push(u);
    
    while(!stk.empty())
    {
        int current = stk.top(); // Get the top vertex from the stack.
        stk.pop(); // Pop the vertex from the stack.
        cout << "Visiting Node : " << current << endl; // Print the visited node.

        if(visited2[current] == false) // If the vertex is not visited
        visited2[current] = true; // Mark the vertex as visited.
        
        for(auto v : adj[current]) // Loop through neighbors of the current node.
        {
            if(visited2[v] == false)  // If the neighbors is not visited
            {
                stk.push(v);   // Push unvisited neighbors onto the stack.
            }
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
    cout << endl;
    DFS(1);

    // Loop to print visited status of each node.
    for(int i = 1; i <= n; i++) 
    {
        cout << "Visited status of node " << i << ": " << visited[i] << endl;
    }

    return 0;
}

/*
    Detailed Explanation : dfs ----> recursive approach

    1.  The adj array is used to represent the adjacency list of the graph. 
        It's a vector of vectors, where each vector holds the neighbors of a vertex.

    2.  The visited array is a boolean array used to keep track of which nodes 
        have been visited during the DFS traversal.
    
    3.  The dfs function implements the DFS traversal. 
        It takes a vertex u as input and starts from that vertex.
    
    4.  In the dfs function:
        visited[u] = true; marks the current node as visited.
        cout << "Visited Node: " << u << endl; prints the visited node.
    5.  The for loop iterates through the neighbors of the current node. 
        If a neighbor hasn't been visited yet, the dfs function is called recursively on that neighbor and go to the depth
        of that Node.

    6.  The main function reads input for the graph, constructs the adjacency list, 
        and then starts the DFS traversal from node 1 using dfs(1).

    7 . After the DFS traversal, the loop prints the visited status of each node.
*/


/*
    Detailed explanation : DFS ----> using stack 

    1.  It starts by pushing the starting vertex onto the stack.
    2.  The loop continues until the stack is empty. In each iteration:
        * The top vertex is popped from the stack.
        * If the vertex is not visited , It's marked as visited.
        * The visited node is printed.
        * Unvisited neighbors of the current vertex are pushed onto the stack for later exploration.
*/