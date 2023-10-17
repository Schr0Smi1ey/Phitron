#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    // ascending
    sort(str.begin(),str.end()); // str.begin() = pointer to the first index
    // str.end() = pointer to the NULL index ..er ag porjonto string sort korbe
    cout<<str<<endl;
    cin>>str2;
    // descending
    sort(str2.begin(),str2.end(),greater<char>());
    cout<<str2;
}