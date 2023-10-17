#include<bits/stdc++.h>
using namespace std;

// capacity of string class

int main()
{
    string str;
    // here string is basically a class and str is an object of this class
    str = "sarafat karim"; // we can assign value directly to the string contradicting to (char array)
    // we use string in C ....it is basically a char array
    // But in C++ we have a string class

    // functions under string class
    


    //  size() function = returns the size of the string 

    cout<<"string size : "<<str.size()<<endl;

    // length() function = returns the lenght of the string(This function is commonly used in languages like Java, Python, and C# to obtain the length of a string)

    cout<<"string length : "<<str.length()<<endl;

    // max_size() function = returns the maximum size of a function that the usable machine can hold

    cout<<"string max_size = : "<<str.max_size()<<endl;

    // capacity() function = returns the size of allocated space

    cout<<"string capacity : "<<str.capacity()<<endl;

    // empty() = returns true if the string is empty else return false

    if(str.empty()) cout<<"string is empty."<<endl;
    else  cout<<"string isn't empty."<<endl;

    // resize() = it perform actions to resize the string object 

    str.resize(10); // this will simply resize the string to 10 and assign other character to NULL or garbage value
    cout<<"resized string : "<<str<<endl;
    // now if we want to increase the size of the string it will print garbage value after the 10th character
    str.resize(15);
    cout<<"after again resize(increase) the string : "<<str<<endl;
    // But we can assign a character to all the other characters after the 10th character
    str.resize(20,'a');
    cout<<"after assigning 'a' character after 10th character : "<<str<<endl; // it will printing first 15 character as it's capacity is 15


    // addition of two objects

    string str2 = " is a good boy.";
    // basically the addition of two string objects is performed using operator overloading. 

    str = str + str2; //Overloaded + operator performs concatenation

    cout<<"str after add str2 : "<<str<<endl;

    // clear() function = simply clear the string and makes it empty

    str.clear();
    cout<<"string size : "<<str.size()<<endl;
    
    
    if(str.empty()) cout<<"string is empty."<<endl;
    else  cout<<"string isn't empty."<<endl;
    
    return 0;
}