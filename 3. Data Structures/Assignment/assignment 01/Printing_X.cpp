#include<bits/stdc++.h>
using namespace std;
// printing X
int main()
{
    int n;
    cin>>n;
    int space = n-2;
    for(int j=0;j<n;j++)
    {
        if(j==n/2)
        {
            for(int k=0;k<n/2;k++)
            cout<<" ";
            cout<<"X"<<endl;
            continue;
        }
        if(j<=n/2)
        {
            for(int i=0;i<j;i++)
            cout<<" ";
            cout<<"\\";
            for(int j=0;j<space;j++)
            cout<<" ";
            cout<<"/";
            cout<<endl;
            space-=2;
        }
        else
        {
            space+=2;
            for(int i=0;i<n-1-j;i++)
            cout<<" ";
            cout<<"/";
            for(int i=0;i<space;i++)
            {
                cout<<" ";
            }
            cout<<"\\";
            cout<<endl;
        }      
    }
}