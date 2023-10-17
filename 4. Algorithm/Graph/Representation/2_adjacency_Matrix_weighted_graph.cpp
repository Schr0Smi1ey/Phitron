#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;

int adjMat[N][N]; // Declaring the adjacency matrix.

signed main()
{
    int n, m;
    cin >> n >> m; // Input the number of vertices (n) and number of edges (m).

    for(int i = 0; i < m; i++) // Loop to input edge information m times.
    {
        int u, v, w; // u: starting node, v: ending node, w: weight of the edge.
        cin >> u >> v >> w;
        adjMat[u][v] = w; // Assigning the weight 'w' in the cell (u, v).
        adjMat[v][u] = w; // For an undirected graph, also assign the weight in (v, u).
    }

    // Printing the adjacency matrix.
    for(int i = 1; i <= n; i++) // Loop to print rows of the adjacency matrix.
    {
        for(int j = 1; j <= n; j++) // Loop to traverse each cell in the row.
        {
            cout << adjMat[i][j] << " "; // Printing the weight stored in the cell.
        }
        cout << endl; // Moving to the next row.
    }
    return 0;
}
