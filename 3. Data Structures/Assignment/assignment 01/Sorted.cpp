#include<bits/stdc++.h>
using namespace std;
// sorted
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                if(arr[i]<arr[i-1])
                flag = false;
            }
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}