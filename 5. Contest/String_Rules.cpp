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
    string str;cin>>str;
    int n;
    string result = "";
    for(int i=0;i<str.size();i++)
    {
        n = str[i]-'0';
        i++;
        string temp = "";
        while(i<str.size() && !isdigit(str[i]))
        {
            temp+=str[i];
            i++;
        }
        char sign = '\0';
        if(!temp.empty() && !isalpha(temp.back()))
        {
            sign = temp.back();
            temp.pop_back();
        }
        while(n--)
        {
            for(auto x:temp)
            result+=x;
        }
        if(sign=='+' || sign=='*' || sign =='/' || sign =='-')
        result+=sign;
        i--;
    }
    if(!isalpha(result.back()))
    result.pop_back();
    cout<<result;
    return 0;
}