#include<bits/stdc++.h>
using namespace std;
// time complexity of this code is : O(n*n)

// max limit : 10^3
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) // time complexity : O(n*n)
        {
            cout<<"hi"<<endl;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)  // time complexity : O(m*n)
        {
            cout<<"karim"<<endl;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)  // time complexity : O(n*n)
        {
            cout<<"how are you?"<<endl;
        }
    }
    return 0;
}