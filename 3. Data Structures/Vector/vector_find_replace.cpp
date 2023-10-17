#include<bits/stdc++.h>
using namespace std;
// find() and replace() function under algorithm header file
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    // find(v.begin(),v.end(),value to find) : it returns a pointer to the first occurance of the value , if not found it will return
    // pointer next to the last element

    vector<int>::iterator it; // to declare a iterator
    it = find(v.begin(),v.end(),4);
    cout<<*it<<endl; // it will print 4

    // auto it1 : it's wrong to declare
    auto it1 = find(v.begin(),v.end(),5); 
    cout<<*it1<<endl;

    if(find(v.begin(),v.end(),6)!=v.end())
    cout<<"Found"<<endl;
    else
    cout<<"Not found"<<endl;
    return 0;
}