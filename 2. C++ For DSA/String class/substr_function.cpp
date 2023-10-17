#include<bits/stdc++.h>
using namespace std;
// substr(postion,length)
// pos : This parameter defines the position of the character from where character to be copied as a substring.
// len : This parameter defines the number of characters to be included 
// in the substring object starting from the position defined in the first parameter

// return value : This function returns a newly constructed string object
int main()
{
    string str;
    cin>>str;
    cout<<str.substr(3)<<endl;
    cout<<str.substr(2,3)<<endl;
    for(int i=0;i<str.size()-1;i++)
    {
        cout<<str.substr(i,2)<<endl; // it will extract all the substring of 2 character
    }
    return 0;
}