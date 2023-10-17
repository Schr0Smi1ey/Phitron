#include<bits/stdc++.h> // Include necessary header files
using namespace std;
#define INF INT_MAX // Define a constant representing infinity as INT_MAX

class Edge // Define a class to represent edges
{
public:
    int u, v, w; // Source vertex, destination vertex, and edge weight

    // Constructor to initialize the edge properties
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

signed main()
{
    int n, e; // Declare variables for the number of vertices and edges
    cin >> n >> e; // Input the number of vertices and edges from the user

    vector<Edge> edges; // Create a vector to store edge information

    // Input edge information and store it in the vector
    while (e--)
    {
        int u, v, w; // Declare variables for source vertex, destination vertex, and edge weight
        cin >> u >> v >> w; // Input edge information
        edges.push_back(Edge(u, v, w)); // Create an Edge object and add it to the vector
    }

    vector<int> dis(n + 1, INF); // Create a vector to store shortest distances, initialized to INF
    dis[1] = 0; // Set the shortest distance to the source vertex (vertex 1) to 0

    // Bellman-Ford algorithm
    for (int i = 1; i <= n - 1; ++i) // Repeat the relaxation step n-1 times
    {
        for (auto j : edges) // Iterate through all edges
        {
            int u = j.u; // Source vertex of the current edge
            int v = j.v; // Destination vertex of the current edge
            int w = j.w; // Weight of the current edge

            // Relaxation step: Update the shortest distance if a shorter path is found
            if (dis[u] != INF && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }

    // Output the shortest distances from vertex 1 to all other vertices
    for (int i = 1; i <= n; ++i)
    {
        cout << dis[i] << " ";
    }

    return 0; // Return 0 to indicate successful execution
}
