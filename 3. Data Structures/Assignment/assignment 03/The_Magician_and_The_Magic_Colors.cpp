#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    string str;cin>>str;int len = str.size();
    stack<char> stk;
    for(int i=0;i<len;i++)
    {
        if(!stk.empty() && stk.top()==str[i])
        {
            stk.pop();
        }
        else
        {
            if(!stk.empty())
            {
                if((stk.top()=='R' && str[i]=='B') || (stk.top()=='B' && str[i]=='R'))
                {
                    stk.pop();
                    stk.push('P');
                }
                else if((stk.top()=='R' && str[i]=='G') || (stk.top()=='G' && str[i]=='R'))
                {
                    stk.pop();
                    stk.push('Y');
                }
                else if((stk.top()=='B' && str[i]=='G') || (stk.top()=='G' && str[i]=='B'))
                {
                    stk.pop();
                    stk.push('C');
                }
                else
                stk.push(str[i]);
            }
            else
            stk.push(str[i]);
        }
    }
    stack<char> ans;
    if(stk.empty())
    cout<<""<<endl;
    else
    {
        while(!stk.empty())
        {
            if(!ans.empty() && ans.top()==stk.top())
            {
                stk.pop();
                ans.pop();
                continue;
            }
            ans.push(stk.top());
            stk.pop();
        }
        if(ans.empty())
        cout<<""<<endl;
        else
        {
            while(!ans.empty())
            {
                cout<<ans.top();
                ans.pop();
            }
            cout<<endl;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}