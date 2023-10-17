#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string str,str1;cin>>str>>str1;
    int com = str.compare(str1);
    /*
        if(com==0) means both string are equal
        if(com>0) means str if lexicographically greater than str1
        if(com<0 ) means str1 if lexicographically greater than str1
    */
    if(com>=0)
    cout<<str1;
    else
    cout<<str;
    return 0;
}