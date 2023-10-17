#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void print(list<int>&arr)
{
    for(auto x:arr)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
    list<int> mylist = {1,1,1,1,2,2,2,2,3,3,3,3,3,4,5,5,5,5,1,1,3,4,5,6,6,6,6,6,6};
    cout<<"Before operation : ";
    print(mylist);
    // remove() = remove a specific value from the list
    cout<<"After remove all 1 from the list : ";
    mylist.remove(1);
    print(mylist);

    // sort() = sort the list
    //Time complexity : O(NlogN)
    // sort in ascending order
    mylist.sort();
    cout<<"After sort in ascending order : ";
    print(mylist);
    // sort in descending order
    mylist.sort(greater<int>());
    cout<<"After sort in descending order : ";
    print(mylist);

    // unique() = removes the duplicate element from the list (list must be sorted)
    mylist.unique();
    cout<<"After remove all the duplicate elements from the list : ";
    print(mylist);


    // reverse() = reverse the list
    mylist.reverse();
    cout<<"After reverse the list : ";
    print(mylist);
    return 0;
}