#include<bits/stdc++.h>
using namespace std;
// modifiers in string class
int main()
{
    string str,str2;
    str = "Sarafat karim"; // (=) operator to assign a string
    
    // assign() function to to assign a string
    str2.assign(" is a good boy");

    // (s+=) to append string
    str +=str2;
    cout<<str<<endl;

    // append() function to add string 
    str.append(str2);
    cout<<str<<endl;

    // to add a character at the end of the string
    str.push_back('Z');
    cout<<str<<endl;

    // to add a character at the end of the string
    str+='x';
    cout<<str<<endl;
    
    // to remove a character from the end of the string 
    str.pop_back();
    cout<<str<<endl;

    // erase(starting_index,number_of_char_to_delete) function = erase a specific portion from a string
    str = "sarafat karim";
    str.erase(8,3);
    cout<<str<<endl;

    // replace(starting_index,number_of_char_to_replace,string_by_which_replace) function = replace a specific portion of a string by another string
    str.replace(8,3,"it's you");
    cout<<str<<endl;

    // insert(starting_index,string_which_is_to_insert) function = insert a string in a specific position of a string
    str.insert(8," is a bad boy ");
    cout<<str<<endl;

    return 0;
}