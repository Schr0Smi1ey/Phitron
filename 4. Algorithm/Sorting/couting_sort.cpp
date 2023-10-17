#include<bits/stdc++.h>
using namespace std;
// we will sort a string using counting sort
int main()
{
    string str; // for a character(alphabet) string (considering only lowercase or uppercase)
    string num; // for a number string 
    cin>>str>>num;
    int fre_str[26]; // alphabet are 26
    int fre_num[10]; // there are only 10 digit
    for(int i=0;i<str.size();i++)
    {
        fre_str[str[i]-'a']++;
    }
    for(int i=0;i<num.size();i++)
    {
        fre_num[num[i]-'0']++;
    }
    
    // ascending order
    for(char ch='a';ch<='z';ch++)
    {
        if(fre_str[ch-'a']>0)
        {
            while(fre_str[ch-'a']--)
            {
                cout<<ch;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        if(fre_num[i]>0)
        {
            while(fre_num[i]--)
            {
                cout<<i+1;
            }
        }
    }
    return 0;
}