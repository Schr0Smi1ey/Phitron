#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5,100);
    vector<int> arr(5);
    // assign (=) of vector

    arr = v; // Time complexity : O(1) as both vectors size is same
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    // push_back() : add an element at the end
    arr.push_back(60); // arr.emplace_back() --> does the same work but emplace_back is slightly faster than the push_back

    // pop_back() : remove the last element
    arr.pop_back();

    return 0;
}