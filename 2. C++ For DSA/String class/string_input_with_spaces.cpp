#include<bits/stdc++.h>
using namespace std;
// string input with spaces
int main()
{
    int t;
    cin>>t;
    // getchar(); // to avoid the (enter) character after taking input the integer
    cin.ignore(); // do the same job as getchar();
    string str;
    
    // cin>>str ; // take input string without spaces

    getline(cin,str); // getline(cin,string) funtion = to take input with spaces
    cout<<"int value : "<<t<<endl;
    cout<<str<<endl;
}