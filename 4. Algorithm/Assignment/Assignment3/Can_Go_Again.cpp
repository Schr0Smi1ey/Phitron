#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
signed main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edges;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    vector<int> dis(n + 1, INF);
    int src,t;cin >> src >> t;
    dis[src] = 0; 
    for (int i = 1; i <= n - 1; ++i)
    {
        for (auto j : edges)
        {
            int u = j.u;
            int v = j.v;
            int w = j.w;
            if (dis[u] != INF && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    for (int i = 1; i <= n - 1; ++i)
    {
        for (auto ed : edges)
        {
            int u = ed.u;
            int v = ed.v;
            int w = ed.w;
            if (dis[u] != INF && dis[u] + w < dis[v])
            {
                cout << "Negative Cycle Detected" ;
                return 0;
            }
        }
    }
    while(t--)
    {
        int des;cin >> des;
        if(dis[des] != INF)
        cout << dis[des] << endl;
        else
        cout << "Not Possible" << endl;
    }
    return 0;
}
