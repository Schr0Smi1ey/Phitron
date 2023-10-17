#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX // Infinity value for initial distances

signed main() 
{
    int n, e; // n: number of nodes, e: number of edges
    cin >> n >> e; // Input the number of nodes and edges

    int dis[n+1][n+1]; // Create a 2D array to store shortest path distances

    // Initialize the dis array with initial values
    fill_n((int*)dis,(n+1)*(n+1),INF);
    for(int i=1;i<=n;i++) dis[i][i] = 0;
    /*
        for(int i = 1; i <= n; i++) 
        {
            for(int j = 1; j <= n; j++) 
            {
                dis[i][j] = INF; // Set all distances to infinity
                if(i == j) dis[i][j] = 0; // Set distance from a node to itself as 0
            }
        }
    */
    // Input edge information and populate the dis array
    while(e--) 
    {
        int u, v, w; // u: source node, v: destination node, w: edge weight
        cin >> u >> v >> w;
        dis[u][v] = w; // Assign the edge weight to dis[u][v] (for a directed graph)
    }

    // Floyd-Warshall algorithm to find shortest path distances
    for(int k = 1; k <= n; k++) 
    {
        for(int i = 1; i <= n; i++) 
        {
            for(int j = 1; j <= n; j++) 
            {
                // Check if there's a shorter path from i to j through node k
                if(dis[i][k] != INF && dis[k][j] != INF && (dis[i][k] + dis[k][j] < dis[i][j])) 
                {
                    dis[i][j] = dis[i][k] + dis[k][j]; // Update the shortest distance
                }
            }
        }
    }

    // Output the resulting shortest path distances
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        {
            cout << dis[i][j] << " "; // Print the distances between all pairs of nodes
        }
        cout << endl;
    }

    return 0; // Exit the program
}
