#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
vector<pair<int,int>> adj[N];
bool visited[N];
int cnt = 0,n,e;
class Edge
{
    public : 
        int u,v,w;
        Edge(int u,int v,int w)
        {
            this->u = u;this->v = v;this->w = w;
        }
};
class Cmp
{
    public : 
        bool operator()(Edge a,Edge b)
        {
            return a.w > b.w;
        }
};
void prims(int src)
{
    priority_queue<Edge,vector<Edge>,Cmp> pq;
    pq.push({src,src,0});
    int cost = 0;
    while(!pq.empty())
    {
        auto current = pq.top();
        pq.pop();
        int v = current.v,w = current.w;
        if(visited[v]) continue;
        visited[v] = true;
        cost += w;
        cnt++;
        for(auto x : adj[v])
        {
            int node = x.first,cost = x.second;
            if(!visited[node])
            {
                pq.push(Edge(v,node,cost));
            }
        }
    }
    if(cnt == n)
    cout << cost;
    else
    cout << "IMPOSSIBLE";
}
signed main()
{
    fastio;
    cin >> n >> e;
    while(e--)
    {
        int u,v,w;cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    prims(1);
    return 0;
}