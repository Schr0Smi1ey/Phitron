#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1st method 
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    
    // 2nd method
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    return 0;
}