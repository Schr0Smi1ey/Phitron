#include<bits/stdc++.h>
using namespace std;
// range sum query
int main()
{
    int p,q;
    cin>>p>>q;
    vector<long long int> arr(p+1,0);
    for(int i=1;i<p+1;i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }
    int m,n;
    while(q--)
    {
        cin>>m>>n;
        cout<<arr[n]-arr[m-1]<<endl;
    }
    return 0;
}