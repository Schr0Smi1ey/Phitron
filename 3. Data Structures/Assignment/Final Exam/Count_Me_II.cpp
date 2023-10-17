#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    map<int,int> mp;
    int count = INT_MIN,result;
    int temp;cin>>temp;mp[temp]++;
    count = mp[temp],result = temp;n--;
    while(n--)
    {
        int x;cin>>x;
        mp[x]++;
        if(mp[x]==count)
        {
            if(x>result)
            {
                result = x;
            }
        }
        else if(mp[x]>count)
        {
            result = x;
            count = mp[x];
        }
    }
    cout<<result<<" "<<count<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
}