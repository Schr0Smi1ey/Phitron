#include<bits/stdc++.h>
using namespace std;

// Time complexity : O(N*E)
// if path relaxation is possible then push the Node in the queue
// No visited array

int n, e; // number of vertices (n) and edges (e)
const int N = 1e5 + 5; // Maximum number of vertices

vector<pair<int,int>> adj[N]; // Adjacency list to represent the graph
int dis[N]; // Array to store shortest distances from the source vertex

void dijkstra(int src) 
{
    for(int i=0; i < N; i++) 
    {
        dis[i] = INT_MAX; // Initialize all distances as infinity
    }

    queue<int> q;
    q.push(src); // Start BFS traversal from the source vertex
    dis[src] = 0; // Distance to the source vertex is 0

    while(!q.empty()) // BFS traversal loop
    { 
        int parent = q.front(); // Get the front vertex from the queue
        q.pop(); // Remove the front vertex from the queue

        for(int i=0; i<adj[parent].size(); i++) 
        {
            pair<int,int> child = adj[parent][i]; // Get a neighbor (child) of the current vertex
            int childNode = child.first; // Neighbor's vertex number
            int childDis = child.second; // Weight of the edge to the neighbor

            // Check if the path through the current vertex is shorter to the neighbor (path relaxation)
            if(dis[parent] + childDis < dis[childNode]) 
            {
                dis[childNode] = dis[parent] + childDis; // Update the shortest distance
                q.push(childNode); // Enqueue the neighbor for further traversal
            }
        }
    }
}

void read_graph() 
{
    cin >> n >> e; // Read the number of vertices and edges

    while(e--) // Loop to read edge information
    {
        int u, v, w;
        cin >> u >> v >> w; // Read edge vertices (u and v) and weight (w)
        adj[u].push_back({v, w}); // Add v as a neighbor of u with weight w
        adj[v].push_back({u, w}); // Add u as a neighbor of v with weight w
    }
}

void print_graph() 
{
    for(int i=1; i<=n; i++) // Loop to print shortest distances for all vertices
    { 
        cout << "Shortest distance of Node " << i << " : " << dis[i] << endl;
    }
}

signed main() 
{
    read_graph(); // Read the graph
    dijkstra(1); // Find shortest distances from source vertex 1
    print_graph(); // Print the shortest distances
    return 0;
}
