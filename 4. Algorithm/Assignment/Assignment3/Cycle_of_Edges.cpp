#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
vector<int> parent;
int findUPar(int node)
{
    if(parent[node] == node)
    return node;
    return parent[node] = findUPar(parent[node]);
}
signed main()
{
    fastio;
    int n,e,cnt = 0;cin >> n >> e;
    parent.resize(n+1);
    for(int i=0;i<n+1;i++)
    parent[i] = i;
    while(e--)
    {
        int u,v;cin >> u >> v;
        int pu = findUPar(u),pv = findUPar(v);
        if(pu != pv)
        {
            parent[pu] = pv;
        }
        else
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}