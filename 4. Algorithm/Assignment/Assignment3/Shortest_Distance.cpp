#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n,e;cin >> n >> e;
    int cost[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cost[i][j] = INF;
            if(i==j) cost[i][j] = 0;
        }
    }
    while(e--)
    {
        int u,v,w;cin >> u >> v >> w;
        cost[u][v] = min(cost[u][v],w);
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(cost[i][k] != INF && cost[k][j] != INF && (cost[i][k] + cost[k][j] < cost[i][j]))
                {
                    cost[i][j] = cost[i][k] + cost[k][j];
                }
            }
        }
    }
    int q;cin >> q;
    while(q--)
    {
        int src,des;cin >> src >> des;
        if(cost[src][des] != INF)
        cout << cost[src][des] << endl;
        else
        cout << -1 << endl;
    }
    return 0;
}