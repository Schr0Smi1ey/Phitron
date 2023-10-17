#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n;cin>>n;int arr[n];
    for(auto &x:arr)
    cin>>x;
    int k;cin>>k;
    int count = 0;
    for(auto x:arr)
    {
        if(x==k)
        count++;
        if(count>1)
        break;
    }
    puts(count>1?"YES":"NO");
    return 0;
}