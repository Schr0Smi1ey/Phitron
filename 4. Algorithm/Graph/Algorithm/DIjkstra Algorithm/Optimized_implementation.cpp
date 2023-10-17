#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N+ElogN)
int n, e; // Variables to store the number of vertices (n) and edges (e)
const int N = 1e5 + 5; // Maximum number of vertices

vector<pair<int,int>> adj[N]; // Adjacency list to represent the graph
int dis[N]; // Array to store shortest distances from the source vertex
bool vis[N]; // Array to track visited vertices

void read_graph() 
{
    cin >> n >> e; // Read the number of vertices and edges

    while(e--) { // Loop to read edge information
        int u, v, w;
        cin >> u >> v >> w; // Read edge vertices (u and v) and weight (w)
        adj[u].push_back({v, w}); // Add v as a neighbor of u with weight w
        adj[v].push_back({u, w}); // Add u as a neighbor of v with weight w
    }
}

void dijkstra(int src) 
{
    for(int i = 1; i <= n; i++) 
    {
        dis[i] = INT_MAX; // Initialize all distances as infinity
        vis[i] = false;   // Initialize all vertices as unvisited
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src}); // Start with the source vertex
    dis[src] = 0; // Distance to the source vertex is 0

    while(!pq.empty()) 
    {
        pair<int,int> parent = pq.top(); // Get the vertex with smallest known distance
        pq.pop(); // Remove it from the queue

        int pNode = parent.second; // Vertex number
        int pDis = parent.first; // Distance to the vertex

        if(vis[pNode]) {
            continue; // Skip if the vertex has been visited already
        }
        vis[pNode] = true; // Mark the vertex as visited

        for(int i = 0; i < adj[pNode].size(); i++) 
        {
            pair<int,int> adjacent = adj[pNode][i]; // Get a neighbor (adjacent) of the current vertex
            int childNode = adjacent.first; // Neighbor's vertex number
            int childDis = adjacent.second; // Weight of the edge to the neighbor

            // Path relaxation
            if(pDis + childDis < dis[childNode]) 
            {
                dis[childNode] = pDis + childDis; // Update the shortest distance
                pq.push({dis[childNode], childNode}); // Enqueue the neighbor with updated distance
            }
        }
    }
}

void print_distances() 
{
    for(int i = 1; i <= n; i++) {
        cout << "Shortest distance of Node " << i << " : " << dis[i] << endl;
    }
}

signed main() 
{
    read_graph(); // Read the graph
    dijkstra(1); // Find shortest distances from source vertex 1
    print_distances(); // Print the shortest distances
    return 0;
}