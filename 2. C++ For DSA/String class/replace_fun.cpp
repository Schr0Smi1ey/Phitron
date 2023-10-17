#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cin>>str>>str2;
    str.replace(2,2,str2); // parameter (starting position,length,(string by which replace))
    cout<<str;
}