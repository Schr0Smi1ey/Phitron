#include<bits/stdc++.h>
using namespace std;
// we will print all the word in reverse using recursion

void print(stringstream& str);
int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    print(ss);
}
void print(stringstream& str)
{
    string word;
    if(str>>word) // there is no base case in this function ....
    // the condition says if (there is a word in str)
    {
        // to print in straight manner
        // cout<<word<<endl;
        // print(str); // after printing a word we will again call the function to print the next one

        // to print in reverse order we have to first call the function then printing
        print(str);
        cout<<word<<endl;
    }
}