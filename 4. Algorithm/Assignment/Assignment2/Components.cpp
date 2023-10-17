#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
vector<int> v;

int dfs(int u,int &cnt)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            visited[v] = true;
            dfs(v,++cnt);
        }
    }
}
signed main()
{
    fastio;
    int n ,m;
    cin >> n >> m;
    set<int> st;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        st.insert(u);
        st.insert(v);
    }
    for(auto x : st)
    {
        int cnt = 1;
        if(!visited[x])
        {
            dfs(x,cnt);
            if(cnt!=1)
            v.push_back(cnt);
        }
    }
    sort(v.begin(),v.end());
    for(auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}