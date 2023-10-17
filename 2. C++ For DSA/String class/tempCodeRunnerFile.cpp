#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    string str;
    cin>>str;
    int found = str.find_first_of("aeiou",0);
    while(found!=string::npos)
    {
        str[found]='*';
        found = str.find_first_of("aeiou",found+1);
    }
    cout<<str;
}