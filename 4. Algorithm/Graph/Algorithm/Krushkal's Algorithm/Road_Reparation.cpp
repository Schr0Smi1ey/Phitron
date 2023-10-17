#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
vector<int> parent;
class Edge
{
    public :    
        int u,v,w;
        Edge(int u,int v,int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int findUPar(int node)
{
    if(parent[node] == node)
    return node;
    return parent[node] = findUPar(parent[node]);
}
signed main()
{
    fastio;
    int n,e,ans = 0,cnt = 0;cin >> n >> e;
    parent.resize(n+1);
    for(int i=1;i<=n;i++)
    parent[i] = i;
    vector<Edge> edgeList;
    while(e--)
    {
        int u,v,w;cin >> u >> v >> w;
        edgeList.push_back(Edge(u,v,w));
    }   
    sort(edgeList.begin(),edgeList.end(),cmp);
    for(auto val : edgeList)
    {
        int pu = findUPar(val.u),pv = findUPar(val.v);
        if(pu != pv)
        {
            ans += val.w;
            parent[pu] = pv;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(parent[i] == i)
        {
            cnt++;
        }
    }
    if(cnt == 1)
    cout << ans;
    else 
    cout << "IMPOSSIBLE";
    return 0;
}