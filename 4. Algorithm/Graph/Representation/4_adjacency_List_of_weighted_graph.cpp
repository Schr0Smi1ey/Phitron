#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

vector<pair<int,int>> adjList[N]; // Creating an array of vectors for the adjacency list. 
// pair to store each edge weight with it's adjacent node



// vector<int> adjList(N) ---> this creates a single vector only
signed main()
{
    int n, m;
    cin >> n >> m; // Input the number of vertices (n) and number of edges (m).

    for(int i = 0; i < m; i++) // Loop to input edge information m times.
    {
        int u, v, w; // u: starting vertex, v: ending vertex, w: weight of the edge.
        cin >> u >> v >> w;
        adjList[u].push_back({v, w}); // Add the pair (v, w) to the adjacency list of u.
        adjList[v].push_back({u, w}); // If the graph is undirected, add (u, w) to the adjacency list of v.
    }

    // Printing the adjacency list.
    for(int i = 1; i <= n; i++) // Loop to print adjacency list for each vertex.
    {
        cout << "List of " << i << " : ";
        for(auto x : adjList[i]) // Loop through each pair (neighbor, weight) of vertex i.
        {
            cout << "(" << x.first << "," << x.second << ") "; // Print the neighbor and its weight.
        }
        cout << endl; // Move to the next line for the next vertex.
    }
}
