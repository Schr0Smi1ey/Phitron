#include<bits/stdc++.h>
using namespace std;
// we use pointer for pass by reference but in object and classes matte we can't use pointer
// we have to use (&) sign for pass by reference
void change (string &temp);
int main()
{
    string str = "Sarafat ";
    change(str); // here we passing str string to change function
    cout<<str<<endl;
}
void change(string &temp) // the change function will receive the str string adress
{
    temp = "Sarafat karim"; // so this change is happening in str adress
}