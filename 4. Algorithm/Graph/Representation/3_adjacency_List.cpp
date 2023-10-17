#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

vector<int> adjList[N]; // Creating an array of vectors for the adjacency list.
// vector<int> adjList(N) ----> creating a single vector of N size
signed main()
{
    int n, m;
    cin >> n >> m; // Input the number of vertices (n) and number of edges (m).

    for(int i = 0; i < m; i++) // Loop to input edge information m times.
    {
        int u, v;
        cin >> u >> v; // Input starting vertex (u) and ending vertex (v) of an edge.
        adjList[u].push_back(v); // Add v to the adjacency list of u.
        adjList[v].push_back(u); // If the graph is undirected, add u to the adjacency list of v.
    }

    // Printing the adjacency list.
    for(int i = 1; i <= n; i++) // Loop to print adjacency list for each vertex.
    {
        cout << "List of " << i << " : ";
        for(auto x : adjList[i]) // Loop through each neighbor of vertex i.
        {
            cout << x << " "; // Print the neighbor.
        }
        cout << endl; // Move to the next line for the next vertex.
    }
    return 0;
}