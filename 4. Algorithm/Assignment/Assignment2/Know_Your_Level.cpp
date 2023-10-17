#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

const int N = 1e5+5;
vector<int> adj[N];
int level[N];
bool visited[N];
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    level[node] = 0;
    while(!q.empty())
    {
        int processing = q.front();
        q.pop();
        for(auto v : adj[processing])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[processing] + 1;
        }
    }
}
signed main()
{
    fastio;
    int n,m; cin >> n >> m;
    for(int i = 0; i<m; i++)
    {
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(0);
    int query; cin >> query;
    if(query == 0){ cout << 0 ;return 0;}
    vector<int> ans;
    for(int i = 0;i<N;i++)
    {
        if(query == level[i])
        ans.push_back(i);
    }
    if(ans.empty()) {cout<<-1 ; }
    else
    {
        for(auto x : ans)
        {
            cout << x << " ";
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// vector<int> adj[N];
// bool visited[N];
// int level[N];
// void bfs(int u)
// {
//     queue<int> q;
//     q.push(u);
//     visited[u] = true;
//     level[u] = 0;
//     while(!q.empty())
//     {
//         int current = q.front();
//         q.pop();
//         for(auto v : adj[current])
//         {
//             if(!visited[v])
//             {
//                 q.push(v);
//                 visited[v] = true;
//                 level[v] = level[current] + 1;
//             }
//         }
//     }
// }
// signed main()
// {
//     int n , m;
//     cin >> n >> m;
//     for(int i=0 ; i < m; i++)
//     {
//         int u , v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     bfs(0);
//     set<int> ans;
//     int query; cin >> query;
//     for(int i=0;i<=N;i++)
//     {
//         if(level[i] == query)
//         {
//             ans.insert(i);
//         }
//     }
//     if(ans.empty())
//     {
//         cout << -1 ;
//     }
//     else
//     {
//         for(auto x : ans)
//         {
//             cout << x << " ";
//         }
//     }
//     return 0;
// }