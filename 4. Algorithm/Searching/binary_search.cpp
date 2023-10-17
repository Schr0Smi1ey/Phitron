#include<bits/stdc++.h>
using namespace std;
// binary search
bool binarysearch(vector<int>&arr,int n,int target)
{
    int low=0,high=n-1,mid;
    if(arr[low]==target)
    return true;
    if(arr[high]==target)
    return true;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]==target)
        return true;
        else if(arr[mid]<target)
        low = mid+1;
        else
        high = mid -1;
    }
    return false;
}
int main()
{
    int n,q,temp;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    while(q--)
    {
        cin>>temp;
        if(binarysearch(v,n,temp))
        cout<<"found"<<endl;
        else
        cout<<"not found"<<endl;
    }
    return 0;
}