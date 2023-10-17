#include<bits/stdc++.h>
using namespace std;

// Maximum number of vertices in the graph
const int MAX_VERTICES = 1e3 + 5;

// Adjacency list to store graph information
vector<int> adjacencyList[MAX_VERTICES];

// To keep track of visited vertices during traversal
bool visited[MAX_VERTICES];

// To store the level of each vertex during BFS
int vertexLevel[MAX_VERTICES];

// Breadth-First Search traversal
void bfs(int startingVertex)
{
    // Create a queue to store vertices for traversal
    queue<int> queueOfVertices;

    // Push the starting vertex to the queue
    queueOfVertices.push(startingVertex);

    // Mark the starting vertex as visited and set its level to 0
    visited[startingVertex] = true;
    vertexLevel[startingVertex] = 0;

    // Continue traversal while the queue is not empty
    while (!queueOfVertices.empty())
    {
        // Get the front vertex from the queue
        int currentVertex = queueOfVertices.front();

        // Remove the front vertex from the queue
        queueOfVertices.pop();

        // Print the visiting information
        cout << "Visiting Node: " << currentVertex << endl;

        // Traverse all adjacent vertices of the current vertex
        for (auto adjacentVertex : adjacencyList[currentVertex])
        {
            // If the adjacent vertex is not visited
            if (!visited[adjacentVertex])
            {
                // Push the adjacent vertex to the queue for further traversal
                queueOfVertices.push(adjacentVertex);

                // Mark the adjacent vertex as visited
                visited[adjacentVertex] = true;

                // Set the level of the adjacent vertex one level deeper
                vertexLevel[adjacentVertex] = vertexLevel[currentVertex] + 1;
            }
        }
    }
}

// Main function
int main()
{
    int numVertices, numEdges;  // Number of vertices and edges in the graph
    
    // Input the number of vertices and edges
    cin >> numVertices >> numEdges;
    
    // Input the edges and build the adjacency list
    for (int i = 0; i < numEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    // Start BFS traversal from vertex 1
    bfs(1);

    // Display the levels of all vertices
    for (int i = 1; i <= numVertices; i++)
    {
        cout << "Level of Vertex " << i << ": " << vertexLevel[i] << endl;
    }

    return 0;
}
