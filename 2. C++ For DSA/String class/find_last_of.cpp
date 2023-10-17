#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// find the last occurrences of an argument
int main()
{
    string str;
    cin>>str;
    int pos = str.find_last_of("aeiou");
    cout<<pos;
}