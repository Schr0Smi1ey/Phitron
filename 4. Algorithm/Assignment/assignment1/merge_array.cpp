#include<bits/stdc++.h>
using namespace std;
void merge(int *first,int *second,int *arr, int n1,int n2)
{
    int i=0,j=0,l=0;
    while(i<n1 && j<n2)
    {
        if(first[i]>=second[j])
        {
            arr[l++]=first[i++];
        }
        else
        {
            arr[l++]=second[j++];
        }
    }
    while(i<n1)
    {
        arr[l++]=first[i++];
    }
    while(j<n2)
    {
        arr[l++]=second[j++];
    }
}
signed main()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int n2;cin>>n2;int arr2[n2];
    for(int i=0;i<n2;i++)
    cin>>arr2[i];
    int ans[n+n2];
    merge(arr,arr2,ans,n,n2);
    for(auto x : ans)
    cout<<x<<" ";
    return 0;
}