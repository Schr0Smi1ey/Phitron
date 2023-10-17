#include<bits/stdc++.h>
using namespace std;
// find all the divisible value of n

/// time complexity of this code : O(sqrt(n))
// max limit : 10^14
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++) // Time complexity O(sqrt(n))
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            if(i!=n/i)
            cout<<n/i<<endl;
        }
    }
    for(int i=0;i*i<n;i++) // Time complexity O(sqrt(n))
    {
        cout<<i<<endl;
    }
    for(int i=1;pow(i,2)<=n;i++) // Time complexity O(sqrt(n))
    {
        cout<<"hi"<<endl;
    }
    return 0;
}