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
signed main()
{
    fastio;
    int n;cin>>n;
    int temp;
    if(n==1)
    temp = 1;
    else
    temp = mypower(2,n-2);
    cout<<mypower(2,n-1)*temp;
    return 0;
}