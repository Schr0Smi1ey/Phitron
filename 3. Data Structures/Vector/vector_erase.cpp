#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={1,2,3,4,5,6,7,8,9};
    // to erase a single element from a vector
    // syntax : v.erase(v.begin()+3)  pointer to that element which we want to erase
    int n;
    cin>>n;
    v.erase(v.begin()+--n); // it will erase value 4
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // to erase a range 
    // syntax : v.erase(v.begin()+2,v.begin()+5) (pointer to the starting position, pointer to the next of the ending position)
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+--a,v.begin()+--b); // it will erase from index 2 to 5
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// remove all the even elements from the vector
int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            v.erase(v.begin()+i--); // notice at the post-decrement of i
        }
    }
    for(auto x:v)
    cout<<x<<" ";
}

#include<bits/stdc++.h>
using namespace std;
// removing in a range
int main()
{
    vector<int> v = {1,2,3,4,5,6,7};
    vector<int>:: iterator it1,it2;
    it1 = v.begin();
    it2 = v.end();
    it2--;
    it2--;
    v.erase(it1,it2);
    for(auto it = v.begin() ; it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}