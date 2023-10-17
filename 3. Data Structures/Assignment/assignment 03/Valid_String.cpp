#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    string str;
    cin>>str;
    stack<char> stk;
    for(int i=0;i<str.size();i++)
    {
        if(!stk.empty() && ((stk.top()=='A' && str[i]=='B') || (stk.top()=='B' && str[i]=='A')))
        stk.pop();
        else
        stk.push(str[i]);
    }
    puts(stk.empty()?"YES":"NO");
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