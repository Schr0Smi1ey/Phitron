#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) ((n) & (1LL<<(i)))
#define setbit0(n,i) ((n) & (~(1LL<<(i))))
#define setbit1(n,i) ((n) | (1LL<<(i)))
#define togglebit(n,i) ((n) ^ (1LL<<i))
void solution()
{
    int n,x;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    int step = 0;
    for(auto x:mp)
    {
        if(x.second>1)
        step+=(x.second-1);
    }
    cout<<step<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}