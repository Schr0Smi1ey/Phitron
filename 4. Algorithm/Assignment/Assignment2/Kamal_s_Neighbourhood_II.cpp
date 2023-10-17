#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

const int N = 25;
vector<int> adj[N];
bool visited[N];
int cnt = 0;
void dfs(int u)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            cnt++;
            visited[v] = true;
            dfs(v);
        }
    }
}
signed main()
{
    fastio;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int q;
    cin >> q;
    dfs(q);
    cout << cnt ;
    return 0;
}