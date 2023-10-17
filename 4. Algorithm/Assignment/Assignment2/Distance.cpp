#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
vector<int> adj[N];
void bfs(int u,int x,int *level,bool *visited)
{
    visited[u] = true;
    level[u] = 0;
    if(u == x)
    {
        cout << level[u] << endl;
        return;
    }
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        for(auto v : adj[current])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
                level[v] = level[current] + 1;
                if(v == x)
                {
                    cout << level[v] << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
}
signed main()
{
    fastio;
    int n , m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int s,d;
        bool visited[N] = {false};
        int level[N] = {0};
        cin >> s >> d;
        bfs(s,d,level,visited);
    }
    return 0;
}