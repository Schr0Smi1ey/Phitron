#include<bits/stdc++.h>
using namespace std;

int n, e; // number of vertices (n) and edges (e)
const int N = 1e5 + 5; // Maximum number of vertices

vector<int> adj[N]; // Adjacency list to represent the graph
int par[N]; // Array to store parent information for each vertex
bool visited[N]; // Array to track visited vertices

void read_graph()
{
    cin >> n >> e; // Read the number of vertices and edges

    while(e--) 
    {
        int u, v;
        cin >> u >> v; // Read edge vertices (u and v)
        adj[u].push_back(v); // Add v as a neighbor of u
        adj[v].push_back(u); // Add u as a neighbor of v
    }
}

void bfs(int src) 
{
    queue<int> q;
    q.push(src);
    par[src] = -1; // Mark the source vertex with an invalid parent

    while(!q.empty()) // Main BFS traversal loop
    { 
        int parent = q.front();
        q.pop();
        visited[parent] = true; // Mark the current vertex as visited

        for(auto child : adj[parent]) // Iterate through the neighbors of the current vertex
        { 
            if(!visited[child]) // Check if the neighbor has not been visited
            { 
                q.push(child); // Enqueue the neighbor
                visited[child] = true; // Mark the neighbor as visited
                par[child] = parent; // Set the parent of the neighbor as the current vertex
            }
        }
    }
}

void print_path(int des) 
{
    if(!visited[des])  // If the destination is not reachable
    {
        cout << "No path exists" << endl;
        return;
    }
    
    vector<int> path;
    while(des != -1) // Traverse the parent array from destination to source
    { 
        path.push_back(des); // Add the current vertex to the path
        des = par[des]; // Move to the parent vertex
    }
    reverse(path.begin(), path.end()); // Reverse the path to print from source to destination
    for(auto x : path) // Print the path
    { 
        cout << x << " ";
    }
}

signed main() 
{
    read_graph(); // Read the graph
    bfs(1); // Perform BFS traversal from source vertex 1
    print_path(5); // Print the path from source to vertex 5
    return 0;
}
