#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    list<int> lst;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        lst.push_back(val);
    }
    lst.sort();
    lst.unique();
    for(auto x:lst)
    cout<<x<<" ";
    return 0;
}