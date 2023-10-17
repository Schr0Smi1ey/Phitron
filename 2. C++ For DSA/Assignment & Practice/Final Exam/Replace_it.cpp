#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;
        int len = x.size();
        while(s.find(x)!=string::npos)
        {
            s.replace(s.find(x),len,"$");
        }
        cout<<s<<endl;
    }
    return 0;
}