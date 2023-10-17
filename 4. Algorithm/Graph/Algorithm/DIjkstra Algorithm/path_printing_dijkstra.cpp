#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define INF INT_MAX
signed main()
{
    fastio;
    int n,m;cin >> n >> m;
    vector<pair<int,int>> adj[n+1];
    while(m--)
    {
        int u,v,w;cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<int> dis(n+5,INF);
    vector<bool> visited(n+5,false);
    vector<int> par(n+5,-1);

    // dijkstra
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,1});
    dis[1] = 0;
    while(!pq.empty())
    {
        auto current = pq.top();
        pq.pop();
        int pNode = current.second;
        int pDis = current.first;
        if(visited[pNode])
        continue;
        visited[pNode] = true;
        for(auto x : adj[pNode])
        {
            int adjNode = x.first;
            int adjDis = x.second;
            if(pDis + adjDis < dis[adjNode] || dis[adjNode] == INF)
            {
                dis[adjNode] = pDis + adjDis;
                par[adjNode] = pNode;
                pq.push({dis[adjNode],adjNode});
            }
        }
    }
    // path printing
    vector<int> path;
    int des = n;
    if(!visited[n])
    {
        cout << -1;
        return 0;
    }
    while(des != -1)
    {
        path.push_back(des);
        des = par[des];
    }
    reverse(path.begin(),path.end());
    for(auto x : path)
    cout << x << " ";
    return 0;
}
