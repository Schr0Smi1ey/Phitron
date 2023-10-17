#include<bits/stdc++.h>
using namespace std;
// element access funtion in string class
int main()
{
    string str;
    str = "Sarafat karim is a exetremely a good boy";

    // to access the first element of the string 

    cout<<"first element : "<<str.front()<<endl;
    
    // to access a random element of a string 

    cout<<"first element : "<<str[5]<<endl;
    cout<<"first element : "<<str.at(5)<<endl;
    

    // to access the last element of a string

    cout<<"last element : "<<str.back()<<endl;
    cout<<"last element : "<<str[str.size()-1]<<endl;
    return 0;
}