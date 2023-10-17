#include<bits/stdc++.h>
using namespace std;
// using of string constructor
int main()
{
    // 1
    string str("sarafat karim"); // this will initializes the str string to (sarafat karim) 
    // this is done by string constructor
    
    // 2
    string str2("sarafat karim",6); // this will initializes the str2 string to first 6 character
    // another work of string constructor

    // 3
    string a = "sarafat karim";
    string str3(a,4);//  this will initializes the str3 string from the fifth char of a
    // means will ignore the first 4 character of a...and left character will be initialized to str3

    // 4
    string str4(26,'0'); // this will initializes the str4 string to 26 character of '0'

    cout<<str<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    return 0;
}