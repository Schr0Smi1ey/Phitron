#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// find the max element using max function
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int maxima =0 ;
    for(int i=0;i<n;i++)
    {
        maxima = max(maxima,arr[i]);
    }
    cout<<maxima;
    delete[] arr;
    return 0;
}