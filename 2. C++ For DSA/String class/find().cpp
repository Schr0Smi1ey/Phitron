#include<bits/stdc++.h>
using namespace std;
// find() function
int main()
{
    // find(substring) function is basically replacement of strstr function
    // find() = returns the position of the first occurances of the substring
    string str,str1;
    cin>>str>>str1;
    if(str.find(str1)!=string::npos) 
    // std::string::npos is a static member constant of the std::string class in C++. It is used as 
    // // a special value to represent the "not found" condition or an invalid position in a string.
    // // npos stands for "no position
    cout<<"YES";
    else
    cout<<"NO";
    cout<<str.find(str1);  // will print a garbage value if the string isn't found
    return 0;
}