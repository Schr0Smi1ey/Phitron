#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// find_first_of(specified arguments,pos)
// argument = consist of those character which needs to searched
// pos = from where to search
int main()
{
    string str;
    cin>>str;
    int pos = str.find_first_of("efgh",0);
    cout<<pos;
}

// application 

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// replace all the occurences of vowel with asterisk(*)
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