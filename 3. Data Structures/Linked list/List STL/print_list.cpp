#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    list<int> mylist = {1,2,3,4,5};
    // we can't print a list through index as it like doubly linked list...we have to print it through pointer

    for(auto it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // another method to print
    // as we don't get index in any of them method we will use this method
    for(auto x:mylist)
    cout<<x<<" ";
}