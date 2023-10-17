#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    list<int> mylist = {1,2,3,4,5};

    // max_size() = returns the maximum size of the list
    cout<<"max size : "<<mylist.max_size()<<endl;

    // resize() = resize the list with initialized other values to zero
    mylist.resize(5);
    mylist.resize(5,300); // we can initialize other values to zero

    // empty() = return boolean true if the list is empty else returns false
    (mylist.empty())?cout<<"empty"<<endl:cout<<"not empty"<<endl;


    cout<<"before clear : ";
    for(auto x: mylist)
    cout<<x<<" ";
    cout<<endl;
    cout<<"size : "<<mylist.size()<<endl<<endl;
    // clear() = to clear the whole list
    mylist.clear();

    cout<<"after clear : ";
    for(auto x:mylist)
    cout<<x<<" ";
    cout<<endl;
    cout<<"size : "<<endl<<endl;

}