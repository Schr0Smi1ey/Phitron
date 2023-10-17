#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    list<string> lst;
    while(true)
    {
        string str;
        cin>>str;
        if(str=="end")
        break;
        lst.push_back(str);
    }
    int q;
    cin>>q;
    cin.ignore();
    list<string>::iterator ptr = lst.end(),prevptr=lst.end(),nextptr=lst.end(); // iterator to iterate through any STL
    while(q--)
    {
        string command;
        getline(cin,command);
        if(command.find("visit")!=string::npos) // npos 
        {
            ptr = find(lst.begin(),lst.end(),command.substr(6));
            if(ptr!=lst.end())
            {
                cout<<*ptr<<endl;
                prevptr = prev(ptr); // prev() = to go back to the previous pointer
                nextptr = next(ptr); // next() = to go next to the next pointer
            }
            else
            {
                ptr=lst.end();
                cout<<"Not Available"<<endl;
            }
        }
        else if(command=="prev")
        {
            if(prevptr!=lst.end())
            {
                cout<<*prevptr<<endl;
                nextptr = next(prevptr);
                prevptr = prev(prevptr);
            }
            else
            {

                cout<<"Not Available"<<endl;
            }
        }
        else
        {
            if(nextptr!=lst.end())
            {
                cout<<*nextptr<<endl;
                prevptr=prev(nextptr);
                if(next(nextptr)!=lst.end())
                nextptr = next(nextptr);
                else
                nextptr = lst.end();
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}