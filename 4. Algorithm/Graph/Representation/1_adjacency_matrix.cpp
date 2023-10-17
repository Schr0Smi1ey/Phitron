#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;

int adjMat[N][N];   // Declaring the adjacency matrix.
// As we declare the arr in global it will automatically initialized to zero
signed main()
{
    int n, m ; // n: number of vertices, m: number of edges.
    cin >> n >> m;

    for(int i = 0; i < m; i++) // Loop to take input for each edge.
    {
        int u, v; // u: starting node of the edge, v: ending node of the edge.
        cin >> u >> v;
        adjMat[u][v]++; 
        adjMat[v][u]++; // Since the graph is undirected, we increment both entries.
    }

    // Printing the adjacency matrix.

    for(int i = 1; i <= n; i++)  // Loop to print the adjacency matrix row by row.
    {
        for(int j = 1; j <= n; j++) // Loop to traverse through each cell in the row.
        {
            cout << adjMat[i][j] << " "; // Printing the value in the cell.
        }
        cout << endl; // Moving to the next row.
    }
    return 0;
}
