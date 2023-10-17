#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(5,10);
    vector<int> v(5,4);

    // to insert in a specific position 
    // syntax : v.insert(v.begin()+(index where to insert), inserted value)

    arr.insert(arr.begin()+2,5); // will insert 5 at index 2
    for(int x:arr) // shortcut for loop for only print the value of an vector
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // to insert an another vector in a specific position
    // syntax : v.insert(arr.begin()+2,v.begin(),v.end()) (insetion position,inserted vector first element pointer,interted vector pointer next to the last element)

    arr.insert(arr.begin()+2,v.begin(),v.end());
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
// geeksforgeeks
int main()
{
    vector<int> v={1,2,3,4,5,6};
    vector<int> temp = {1,2,3,4,5,6,7,8};
    v.insert(v.begin()+1,100);
    // vector after insert 100 at position 1
    cout<<"vector after insert 100 at position 1 : ";
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    v.insert(v.begin()+2,4,50);
    // vector after insert 50 at position 2 for 4 times
    cout<<"vector after insert 50 at position 2 for 4 times : ";
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;

    v.insert(v.begin()+7,temp.begin()+2,temp.begin()+5);
    // Inserting the portion of temp vector in original
    // vector temp.begin()+2 is starting iterator of vector
    // to be copied temp.begin()+5 is ending iterator of
    // vector to be copied
    cout<<"vector after inserting the portion of temp : ";
    for(auto x:v)
    cout<<x<<" ";

    return 0;
}