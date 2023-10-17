#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int,int>> adj[N]; // Adjacency list to store the graph
vector<bool> visited(N); // To keep track of visited nodes

// Define a class to represent edges with their source, destination, and weight
class Edge
{
    public :  
        int u,v,w;
        Edge(int u,int v,int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

// Define a comparator class for the priority queue
class cmp
{
    public : 
        bool operator()(Edge a,Edge b)
        {
            return a.w > b.w;
        }
};

// Function to find the Minimum Spanning Tree (MST) using Prim's algorithm
void prims(int src)
{
    priority_queue<Edge,vector<Edge>,cmp> pq; // Priority queue to select the minimum weight edge
    pq.push(Edge(src,src,0)); // Initialize with the source vertex and weight 0

    vector<Edge> edgeList; // To store the edges in the MST

    while(!pq.empty())
    {
        auto current = pq.top(); // Get the edge with the minimum weight
        int u = current.u,v = current.v,w = current.w;
        pq.pop(); // Remove the edge from the priority queue

        if(visited[v]) continue; // Skip if the destination vertex(of current edge) is already visited

        visited[v] = true; // Mark the destination vertex(of current edge) as visited
        edgeList.push_back(current); // Add the edge to the MST

        // Explore neighboring vertices of destination(New source)
        for(auto x : adj[v])
        {
            int node = x.first, cost = x.second; // Get the neighboring vertex of destination vertex(of current edge) and its edge weight
            if(!visited[node])
            {
                pq.push(Edge(v,node,cost)); // Add the edge to the priority queue for consideration
            }
        }
    }

    // Print the edges in the Minimum Spanning Tree
    for(auto x : edgeList)
    {
        cout << x.u << " " << x.v << " " << x.w << endl;
    }
}

signed main()
{
    int n,e;cin >> n >> e; // Read the number of vertices (n) and edges (e)
    
    // Read the edges and build the graph
    while(e--)
    {
        int u,v,w;cin >> u >> v >> w;
        adj[u].push_back({v,w}); // Add the edge to the adjacency list
        adj[v].push_back({u,w}); // Since the graph is undirected, add the reverse edge
    }
    
    prims(1); // Call the prim's algorithm with the source vertex 1
    return 0;
}
