#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;cin>>n>>m;
    stack<int> stk;
    queue<int> q;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        stk.push(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    }
    while(n--)
    {
        if(stk.top()!=q.front())
        {
            cout<<"NO";
            return 0;
        }
        stk.pop();q.pop();
    }
    cout<<"YES";
    return 0;
}