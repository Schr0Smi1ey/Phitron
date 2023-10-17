#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e9
const int N = 1e3 + 5;
vector<pair<int,int>> adj[N];
int cost[N][N];
bool visited[N];
int n,e;
void read_graph()
{
    cin >> n >> e;
    for(int i=0;i<e;i++)
    {
        int u,v,w;cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
}
void dis(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,src});
    cost[src][src] = 0;
}
signed main()
{
    fastio;
    read_graph();
    fill_n((int*)cost,N*N,INF);

}