#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
signed main()
{
    // fastio;
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<>> pq;
    while(n--)
    {
        int x;cin>>x;
        pq.push(x);
    }
    int q;cin>>q;
    while(q--)
    {
        int a;cin>>a;
        if(a==0)
        {
            int b;cin>>b;
            pq.push(b);
            cout<<pq.top()<<endl;
        }
        else if(a==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else
            cout<<"Empty"<<endl;
        }
        else if(a==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                    cout<<pq.top()<<endl;
                }
                else
                cout<<"Empty"<<endl;
            }
            else
            cout<<"Empty"<<endl;
        }
    }
    return 0;
}