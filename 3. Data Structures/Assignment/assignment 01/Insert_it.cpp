#include<bits/stdc++.h>
using namespace std;
// insert it
int main()
{
    int n,m,x;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>m;
    vector<int> temp(m);
    for(int i=0;i<m;i++)
    cin>>temp[i];
    cin>>x;
    arr.insert(arr.begin()+x,temp.begin(),temp.end());
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}