#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    list<int> mylist = {1,2,3,4,5,6,7,8,9};
    cout<<mylist.front()<<endl; // to print the first element
    cout<<mylist.back()<<endl; // to print the last element 
    cout<<*next(mylist.begin(),3); // to print a specific element (0 - based) // we must dereference it before printing 
    // because next returns a iterator not the value
    return 0;
}