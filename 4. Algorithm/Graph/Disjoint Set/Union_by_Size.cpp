#include<bits/stdc++.h>
using namespace std;
vector<int> parent,Size;
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

    if(Size[pv] > Size[pu])
    {
        parent[pu] = pv;
        Size[pv] += Size[pu];
    }
    else
    {
        parent[pv] = pu;
        Size[pu]+= Size[pv];
    }
}
signed main()
{
    int n,e;cin >> n >> e;
    parent.resize(n+1);
    Size.resize(n+1,1);
    for(int i=0;i<=n;i++)
    parent[i] = i;
    while(e--)
    {
        int u,v;cin >> u >> v;
        unionBySize(u,v);
    }
    if(findUPar(3) == findUPar(7))
    cout << "Same" <<endl;
    else
    cout << "Not Same" << endl;

    unionBySize(3,7);
    if(findUPar(3) == findUPar(7))
    cout << "Same" <<endl;
    else
    cout << "Not Same" << endl;
    return 0;
}