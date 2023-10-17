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
    string str;cin>>str;
    int i =0;
    priority_queue<int> pq;
    for(int i=0;i<str.size();i++)
    {
        int count = 0;
        if(str[i]=='1')
        {
            while(str[i]=='1')
            {
                count++;
                if(str[i+1]=='1')
                i++;
                else
                break;
            }
        }
        pq.push(count);
    }
    int zaza = 0;
    while(!pq.empty())
    {
        zaza+=pq.top();
        pq.pop();
        if(!pq.empty())
        pq.pop();
    }
    cout<<zaza<<endl;
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