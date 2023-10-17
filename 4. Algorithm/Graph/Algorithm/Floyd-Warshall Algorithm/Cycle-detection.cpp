#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
signed main()
{
    int n,e;cin >> n >> e;
    int dis[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dis[i][j] = INF;
            if(i==j) dis[i][j] = 0;
        }
    }

    while(e--)
    {
        int u,v,w;
        cin >> u >> v >> w;
        dis[u][v] = w; // directed graph
    }

    // floyd warshall
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(dis[i][k] != INF && dis[k][j] != INF && (dis[i][k] + dis[k][j] < dis[i][j]))
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    // Cycle Detection
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        {
            if(i == j && dis[i][j] < 0) // If there is a negative distance from a node to itself, a cycle is detected
            { 
                cout << "Cycle Detected.";
                return 0;
            }
        }
    }
    // Printing sortest path for all pairs of node
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dis[i][j] == INF)
            {
                cout << "inf" << " ";
                continue;
            }
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}