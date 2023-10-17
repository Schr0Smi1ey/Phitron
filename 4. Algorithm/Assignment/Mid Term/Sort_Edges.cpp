#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin >> n;
    vector<pair<int,int>> ans;
    while(n--)
    {
        int u,v;cin >> u >> v;
        ans.push_back({u,v});
    }
    sort(ans.begin(),ans.end());
    for(auto x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}