#include<bits/stdc++.h>
using namespace std;
// task : we will have a string...we have to printing the string in thier descending order of frequency
class customSort
{
    public:
        char ch;
        int count;
};
bool cmp(customSort a,customSort b);
int main()
{
    string str;
    cin>>str;
    customSort fre[26];
    for(int i=0;i<26;i++)
    {
        fre[i].ch=i+'a';
        fre[i].count=0;
    }
    for(int i=0;i<str.size();i++)
    {
        fre[str[i]-'a'].count++;
    }
    sort(fre,fre+26,cmp);
    for(int i=0;i<26;i++)
    {
        if(fre[i].count>0)
        {
            while(fre[i].count--)
            cout<<fre[i].ch;
        }
    }
    return 0;
}
bool cmp(customSort a,customSort b)
{
    if(a.count>b.count)
    return true;
    else
    return false;
}