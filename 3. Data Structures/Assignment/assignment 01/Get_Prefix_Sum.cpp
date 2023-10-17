#include<bits/stdc++.h>
using namespace std;
// get prefix sum
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        arr[i]+=arr[i-1];
    }
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}