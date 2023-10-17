#include<bits/stdc++.h>
using namespace std;
int search(int *arr,int size,int target)
{
    int low = 0, high = size-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]==target)
        return mid;
        else
        {
            if(arr[mid]<target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid -1;
            }
        }
    }
    return -1;
}
signed main()
{
    int n;cin>>n;int arr[n];
    for(auto &x:arr)
    cin>>x;
    int k;cin>>k;
    if(search(arr,n,k)==-1)
    cout<<"Not Found";
    else
    cout<<search(arr,n,k);
    return 0;
}