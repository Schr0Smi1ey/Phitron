#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int m,int r)
{
    int n1=m-l+1,n2 = r-m,i=0,j=0;
    // temporary array to copy values
    int first[n1];
    int second[n2];
    // copying values
    for(i=0;i<n1;i++)
    {
        first[i]=arr[i+l];
    }
    for(i=0;i<n2;i++)
    {
        second[i] = arr[m+1+i];
    }
    // merging two sorted arrays
    i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(first[i]<=second[j])
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
void merge_sort(int *arr,int l,int r)
{
    // base case
    if(l>=r)
    return;

    int mid = l+(r-l)/2;
    // sort left_subarray
    merge_sort(arr,l,mid);
    // sort right subarray
    merge_sort(arr,mid+1,r);
    // merge right and left subarray
    merge(arr,l,mid,r);
}
void print_array(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print_array(arr,n);
    cout<<endl;
    merge_sort(arr,0,n-1);
    print_array(arr,n);
}
