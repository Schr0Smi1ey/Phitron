#include<bits/stdc++.h>
using namespace std;
int main()
{
    // taking input string without spaces
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i]; // we can also take the input using pop_back()
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }

    // taking input string with spaces
    cin>>n;
    cin.ignore();
    vector<string> v1(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v1[i]);
    }
    for(string str:v1)
    {
        cout<<str<<endl;
    }
    return 0;
}