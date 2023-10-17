#include<bits/stdc++.h>
using namespace std;
vector<int> parent,Rank;
int findUPar(int node)
{
    if(node == parent[node])
    return node;
    return parent[node] = findUPar(parent[node]);
}
void unionByRank(int u,int v)
{
    int pu = findUPar(u);
    int pv = findUPar(v);

    if(Rank[pv] > Rank[pu])
    {
        parent[pu] = pv;
    }
    else if(Rank[pu] > Rank[pv])
    {
        parent[pv] = pu;
    }
    else
    {
        parent[pv] = pu;
        Rank[pu]++;
    }
}
signed main()
{
    int n,e;cin >> n >> e;
    parent.resize(n+1);
    Rank.resize(n+1,0);
    for(int i=0;i<=n;i++)
    parent[i] = i;
    while(e--)
    {
        int u,v;cin >> u >> v;
        int pu = findUPar(u);
        int pv = findUPar(v);
        if(pu == pv)
        cout << "Cycle being formed by " << u << " " << v << endl;
        unionByRank(u,v);
    }

}