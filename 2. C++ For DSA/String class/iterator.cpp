#include<bits/stdc++.h>
using namespace std;
//iterator in string class
int main()
{
    string str = "sarafat karim";

    

    // we can iterate through a string element simply by a for loop
    
    // iterator in C++ provides us the same benifit in a different way
    
    cout<<*(str.begin())<<endl; // it will print the first element of the string
    cout<<*(str.end())<<endl; // it will print a null character/garbage value as it point after the last element of the string
    for(auto it=str.begin();it<str.end();it++) // auto = automatically detects the data type of a variable

    // str.begin() = pointer to the first index of the string
    // str.end() = pointer to the next index of the last index 
    {
        cout<<*it<<" "; // so basically to print the string we have to print it by dereferencing as (str.begin()) & (str.end()) is a pointer
    }
    cout<<endl;
    // we can do the same thing by the following way
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}

// note : 


// declaring iterator 

// string::iterator it; 

// if we don't use (auto) ... we have to first declare the iterator first