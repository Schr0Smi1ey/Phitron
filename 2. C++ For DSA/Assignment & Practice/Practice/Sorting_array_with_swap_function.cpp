#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// sorting array using swap function
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    delete[] arr;
    return 0;
}