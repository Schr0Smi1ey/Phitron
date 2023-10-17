#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<int> parent;
int dsu_find(int node)
{
    while(parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
int dsu_union(int a,int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(leaderA != leaderB)
    {
        parent[leaderB] = leaderA;

    }
}
signed main()
{
    int n,e;cin >> n >> e ;
    parent = vector<int>(n+1,-1); 
    while(e--)
    {
        int u,v;cin >> u >> v;
        dsu_union(u,v);
    }
    for(auto x : parent)
    {
        cout << x << " ";
    }
    return 0;
}