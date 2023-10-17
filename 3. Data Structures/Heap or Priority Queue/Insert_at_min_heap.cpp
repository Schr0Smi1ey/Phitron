#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
        int curr_idx = v.size()-1;
        while(curr_idx!=0)
        {
            int parent_idx = (curr_idx-1)/2;
            if(v[parent_idx]>v[curr_idx])
            swap(v[parent_idx],v[curr_idx]);
            else
            break;
            curr_idx = parent_idx;
        }
    }
    for(auto x: v)
    cout<<x<<" ";
    return 0;
}