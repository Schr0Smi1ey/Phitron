#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
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

    if(Rank[pu] > Rank[pv])
    {
        parent[pv] = pu;
    } 
    else if(Rank[pv] > Rank[pu])
    {
        parent[pu] = pv;
    }
    else 
    {
        parent[pu] = pv;
        Rank[pv]++;
    }
}
signed main()
{
    fastio;
    int n,e;cin >> n >> e;
    Rank.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<=n;i++)
    parent[i] = i;
    while(e--)
    {
        int u,v;cin >> u >> v;
        unionByRank(u,v);
    }
    set<int> st;
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        int x = findUPar(i);
        if(st.insert(x).second)
        v.push_back(x);
    }
    cout << v.size() - 1 << endl;
    for(int i=0;i<v.size()-1;i++)
    {
        cout << v[i] << " " << v[i+1] << endl;
    }
    return 0;
}