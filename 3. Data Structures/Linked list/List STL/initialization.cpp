#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// list is a container class that implements a doubly-linked list. 
// It is part of the Standard Template Library (STL) and is defined in the <list> header file.
int main()
{
    list<int> mylist; // declare a list without size and value
    list<int> temp = {1,2,3,4,5}; // declare a list with value
    list<int> flag(5); // declare a list with fixed size
    int arr[] = {11,22,33,44,55};
    vector<int> arr2 = {111,222,333,444,555};
    list<int> mylist1(arr,arr+5); // declare a list with the value of array
    list<int> mylist2(arr2.begin(),arr2.end()); // declare a list with the value of vector
    list<int> mylist3(temp); // declare a list with another list
    // size() funciton
    cout<<"temp size : "<<temp.size()<<endl;
    cout<<"mylist1 size : "<<mylist1.size()<<endl;
    cout<<"mylist2 size : "<<mylist2.size()<<endl;
    return 0;
}