#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    // capacity() = returns the current avaiable capacity of a vector
    cout<<arr.capacity()<<endl;
    // note : we can increase the capacity of vector by push_back()....it increases it's size in twice
    
    cout<<arr.max_size()<<endl; // max_size() = returns the maximum size of the vector that a vector can hold
    cout<<arr.size()<<endl; // size() = returns the size of a vector
    arr.clear(); // clear() = clear the vector element but don't delete the memory
    cout<<arr.empty()<<endl; // empty() = returns true or false depending on vector empty or not
    arr.resize(6) ; // resize() = resize the vector to 6 ..and if there was no element then initialized with zero
    arr.resize(6,100) // resize the vector and initialize all the new index to 100
    return 0;
}