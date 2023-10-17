#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,word;
    getline(cin,str);
    stringstream ss(str);
    int flag = 0;
    while(ss>>word)
    {
        if(word=="Ratul")
        {
            flag++;
            break;
        }
    }
    flag?cout<<"YES":cout<<"NO";
    return 0;
}