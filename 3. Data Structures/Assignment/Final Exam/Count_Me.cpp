#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    string str;getline(cin,str);
    stringstream ss(str);
    string word,result;
    int count = INT_MIN;
    map<string,int> mp;
    while(ss>>word)
    {
        mp[word]++;
        if(mp[word]>count)
        {
            count = mp[word];
            result = word;
        }
    }
    cout<<result<<" "<<count<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        solution();
    }
    return 0;
}