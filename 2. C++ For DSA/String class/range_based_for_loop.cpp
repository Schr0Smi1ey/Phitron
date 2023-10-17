#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    // shortcut for loop for only string class(not for character array)
    // we won't get index by this loop
    // just to work with the character
    for(char c:str)
    {
        cout<<c<<" ";
    }
}