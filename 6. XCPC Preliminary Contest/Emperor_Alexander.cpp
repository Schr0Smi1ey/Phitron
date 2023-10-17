// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// const int INF = 1e18;
// vector<int> parent;
// class Edge{
//     public:
//         int u,v,w;
//         Edge(int u,int v,int w){
//             this->u = u;
//             this->v = v;
//             this->w = w;
//         }
// };
// bool cmp(Edge a,Edge b){
//     return a.w < b.w;
// }
// int findUPar(int node){
//     if(parent[node] == node){
//         return node;
//     }
//     return parent[node] = findUPar(parent[node]);
// }
// signed main()
// {
//     fastio;
//     int n,e;cin >> n >> e;
//     parent.resize(n+1);
//     for(int i=0;i<=n;i++){
//         parent[i] = i;
//     }
//     vector<Edge> edgeList;
//     while(e--){
//         int u,v,w;
//         cin >> u >> v >> w;
//         edgeList.push_back(Edge(u,v,w));
//     }
//     sort(edgeList.begin(),edgeList.end(),cmp);
//     int ans = 0;
//     for(auto edge : edgeList){
//         int pu = findUPar(edge.u);
//         int pv = findUPar(edge.v);

//         if(pu != pv){
//             ans += edge.w;
//             parent[pu] = pv;
//         }
//     }
//     int cnt = 0;
//     for(int i=1;i<=n;i++){
//         if(parent[i] == i){
//             cnt++;
//         }
//     }
//     if(cnt == 1){
//         cout << n-1 << " " << ans ;
//     }
//     else
//     {
//         cout << "Not Possible";
//     }
//     return 0;
// }
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
    int n,e,ans = 0,cnt = 0,y = 0;cin >> n >> e;y = e;
    parent.resize(n+1);
    for(int i=1;i<=n;i++)
    parent[i] = i;
    vector<Edge> edgeList;
    while(y--)
    {
        int u,v,w;cin >> u >> v >> w;
        edgeList.push_back(Edge(u,v,w));
    }   
    sort(edgeList.begin(),edgeList.end(),cmp);
    int x = 0;
    for(auto val : edgeList)
    {
        int pu = findUPar(val.u),pv = findUPar(val.v);
        if(pu != pv)
        {
            x++;
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
    cout <<e -x << " " << ans;
    else 
    cout << "Not Possible";
    return 0;
}