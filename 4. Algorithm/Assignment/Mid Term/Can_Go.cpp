#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int n,m,source,t,d,cost;
const int N = 1e3 + 5;
vector<pair<int,int>> adj[N];
bool visited[N];
int dis[N];
void read_graph()
{
    cin >> n >> m;
    while(m--)
    {
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
}
void dijkstra(int src)
{
    for(int i=0;i<=n;i++)
    {
        dis[i] = INT_MAX;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    dis[src] = 0;
    while(!pq.empty())
    {
        pair<int,int> parent = pq.top();
        pq.pop();

        int pChild = parent.second;
        int pCost = parent.first;

        if(visited[pChild])
        {
            continue;
        }
        visited[pChild] = true;
        for(auto x : adj[pChild])
        {
            int adjChild = x.first;
            int adjCost = x.second;

            if(pCost + adjCost < dis[adjChild])
            {
                dis[adjChild] = pCost + adjCost;
                pq.push({dis[adjChild],adjChild});
            }
        }
    }
}
signed main()
{
    fastio;
    read_graph();
    cin >> source;
    dijkstra(source);
    cin >> t;
    while(t--)
    {
        cin >> d >> cost;
        if(dis[d] <= cost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
 
    }
   return 0;
}