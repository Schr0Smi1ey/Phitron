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
    int t;cin>>t;
    queue<string> q;
    while(t--)
    {
        int x;
        string str;
        cin>>x;
        if(x==0)
        {
            cin>>str;
            q.push(str);
        }
        else
        {
            if(q.empty())
            cout<<"Invalid"<<endl;
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }   
        }
    }
    return 0;
}