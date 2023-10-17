#include<bits/stdc++.h>
using namespace std;

// BFS on 2D matrix
int n,m;  // Declare variables for matrix dimensions
const int N = 1e3 + 5;  // Define a constant N
char str[N][N];  // Declare a 2D character array to store the matrix
int dis[N][N];   // Declare a 2D array to store distances
bool visited[N][N];  // Declare a 2D array to keep track of visited cells

// Function to read the matrix
void read_matrix()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> str[i][j];  // Read characters into the matrix
        }
    }
}

// Function to check if a cell is valid
bool is_valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);  // Check if cell is within matrix boundaries
}

// Breadth-First Search function
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;  // Declare a queue of pairs to store cell coordinates
    q.push({si, sj});  // Push the starting cell into the queue
    dis[si][sj] = 0;  // Initialize distance of starting cell as 0
    visited[si][sj] = true;  // Mark the starting cell as visited

    /*
        Up: (i - 1, j)
        Down: (i + 1, j)
        Left: (i, j - 1)
        Right: (i, j + 1)
        Upper Left: (i - 1, j - 1)
        Upper Right: (i - 1, j + 1)
        Lower Left: (i + 1, j - 1)
        Lower Right: (i + 1, j + 1)
    */
    int dRow[] = {-1, -1, 0, 1, 1, 1, 0 , -1};  // Define changes in row for each direction (up, right, down, left)
    int dCol[] = {0, 1 , 1 , 1, 0 ,-1,-1,-1};  // Define changes in column for each direction
    while(!q.empty())
    {
        pair<int, int> parent = q.front();  // Get the front cell from the queue
        q.pop();  // Remove the front cell from the queue
        int pi = parent.first, pj = parent.second;  // Extract row and column of the parent cell
        
        // Explore all 4 adjacent cells
        for(int i=0; i<8; i++)
        {
            int newRow = pi + dRow[i];  // Calculate row of adjacent cell
            int newCol = pj + dCol[i];  // Calculate column of adjacent cell
            
            // Check if adjacent cell is valid and unvisited
            if(is_valid(newRow, newCol) && !visited[newRow][newCol])
            {
                visited[newRow][newCol] = true;  // Mark the adjacent cell as visited
                q.push({newRow, newCol});  // Push the adjacent cell into the queue
                dis[newRow][newCol] = dis[pi][pj] + 1;  // Update the distance of adjacent cell
            }
        }
    }
}

// Function to print distances
void print_distances()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << dis[i][j] << " ";  // Print distances of all cells
        }
        cout << endl;
    }
}

// Main function
signed main()
{
    cin >> n >> m;  // Read matrix dimensions
    // read_matrix();  // Read the matrix
    int u, v;
    cin >> u >> v;  // Read starting cell coordinates
    bfs(u, v);  // Perform BFS from the starting cell
    print_distances();  // Print the distances of all cells from the starting cell
    return 0;  // Return 0 to indicate successful execution
}
