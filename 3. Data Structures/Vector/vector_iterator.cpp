#include<bits/stdc++.h>
using namespace std;
// v.begin() = returns a iterator pointing to the first element
// v.end() = returns a iterator pointing to the theoretical element right next of the last element
int main()
{
    vector<int> v={1,2,3,4,5,6};
    // vector<int>:: iterator it;  we can declare the iterator also in this way
    for(auto it = v.begin();it<v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// v.rbegin() = returns a reverse iterator pointing to the last element in the container. 
// v.rend() = returns a reverse iterator pointing to the theoretical element right before the first element in the vector container.
int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    for(auto it=v.rbegin();it!=v.rend();it++) // this will print the vector in reverse
    {
        cout<<*it<<" "; 
    }
}