#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
vector<int> adj[N];
void bfs(int u,vector<int>&level,vector<bool> & visited)
{
    visited[u] = true;
    level[u] = 0;
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
            }
        }
    }
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
    int s1,s2,k;cin >> s1 >> s2 >> k;
    vector<bool> visited1(n+1, false);
    vector<bool> visited2(n+1, false);
    vector<int> level1(n+1, 0);
    vector<int> level2(n+1, 0);
    bfs(s1, level1, visited1);
    bfs(s2, level2, visited2);
    vector<int> adjlist1;
    vector<int> adjlist2;
    for(int i = 1; i <= n; i++){
        if(level1[i] <= k && level1[i] !=0){
            adjlist1.push_back(i);
        }
    }
    for(int i = 1; i <= n; i++){
        if(level2[i] <= k && level2[i] !=0){
            adjlist2.push_back(i);
        }
    }
    sort(adjlist1.begin(),adjlist1.end());
    sort(adjlist2.begin(),adjlist2.end());
    bool flag = false;
    for(int i=0;i<adjlist1.size();i++){
        for(int j=0;j<adjlist2.size();j++){
            if(adjlist1[i] == adjlist2[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
        return 0;
    }
    cout <<"NO" << endl;
    return 0;
}