#include<bits/stdc++.h>
using namespace std;
int parent[8] = {-1,-1,1,1,6,4,-1,-1};
// Given a node , return it's parent
int find(int node)
{
    while(parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
signed main()
{
    int node;cin >> node;
    cout << "parent of node " << node << " is : " <<find(node) << endl;
    return 0;
}