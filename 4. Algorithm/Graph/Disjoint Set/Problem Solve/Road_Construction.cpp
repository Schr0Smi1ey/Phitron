#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
vector<int> parent,Size;
int mx = 0;
int findUPar(int node)
{
    if(node == parent[node])
    return node;
    return parent[node] = findUPar(parent[node]);
}
void unionBySize(int u,int v)
{
    int pu = findUPar(u); 
    int pv = findUPar(v);

    if(pu == pv) return ;
    if(Size[pv] > Size[pu])
    {
        parent[pu] = pv;
        Size[pv] += Size[pu];
        mx = max(mx,Size[pv]);
    } 
    else 
    {
        parent[pv] = pu;
        Size[pu] += Size[pv];
        mx = max(mx,Size[pu]);
    }
}
signed main()
{
    fastio;
    int n,e;cin >> n >> e;
    Size.resize(n+1,1);
    parent.resize(n+1);
    for(int i=0;i<=n;i++)
    parent[i] = i;
    int cmp = n;
    while(e--)
    {
        int u,v;cin >> u >> v;
        if(findUPar(u) != findUPar(v))
        {
            cmp--;
            unionBySize(u,v);
            cout << cmp << " " << mx << endl;
        }
        else
        cout << cmp << " " << mx << endl;
    }
    return 0;
}