#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// sorting array,string and reverse a string/array using built in function (sort()) and (reverse())
int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int *arr = new int[5];
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sorting using (sort()) build in function
    // sorting in ascending order
    sort(arr,arr+n); 
    // arr = pointer to the first index
    // (arr + n) = it will sort the array (arr+n-1) element
    cout<<"array in ascending order : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting in descending order
    cout<<"array in descending order : ";
    sort(arr,arr+n,greater<int>());
    // here greater is a function (<data type>) () - to indicate that it's a function
    // we can also use this sort function to sort string in lexigraphical order
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete arr;

    string str;
    cin>>str;
    string str2 = str;
    int len = str.size();
    len++;
    // reverse(str.begin(),str.end()) function = this will reverse a string 
    // str.begin() = pointer to the first index
    // str.end() = pointer after the last index
    reverse(str2.begin(),str2.end()); // using of reverse function to reverse a string/arr

    if(str==str2)
    cout<<"-1"<<endl;
    else
    {
        sort(str.begin(),str.end()); // sort function to a string..
        cout<<str<<endl;
    }   
    return 0;

}