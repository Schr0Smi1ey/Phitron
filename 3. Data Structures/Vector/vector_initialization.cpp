#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1; // type 1 : declare a vector without any data and it will allocate it's size dynamically
    vector<int> v2(5); // type 2 : declare a vector with size 5 & without any element (automaticall initializes to zero)
    vector<int> v3(5,10); // type 3 : declare a vector with size 5 & all the elements to 10
    vector<int> v4(v3); // type 4 : declare a vector with copying all the elements of another vector
    vector<int> v5(v2.begin(),v2.end()); // type 4 : declare a vector with copying all the elements of another vector
    int arr[6] = {1,2,3,4,5,6};
    vector<int> v6(arr,arr+6); // type 5 : declare a vector with all the element of an array 
    // syntax : vector<int> v(pointer to the first element,pointer to the theoratical element that follows the last element)

    vector<int> v7 = {1,2,3,4,5};
    vector<int> v8(v6.begin(),v6.begin()+2); // {1,2} declare a vector with some element of another vector
    for(int i=0;i<v8.size();i++)
    {
        cout<<v8[i]<<" ";
    }
    cout<<endl;
    cout<<v3.size()<<endl;
    return 0;
}