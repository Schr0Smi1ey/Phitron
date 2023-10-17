#include<bits/stdc++.h>
using namespace std;
// extracting word from a sting
int main()
{
    // string str = "Hello , i am sarafat    karim.";
    string str;cin >> str;
    stringstream ss; // ss is a constructor type
    ss<<str; // str theke ss er dike
     // we also can make this declaration like "stringstream ss(str)";
    int wordcount = 0;
    string word;
    while(ss >> word) // jotokkhon porjonto ss theke word er dikez
    {
        wordcount++;
        cout<<word<<endl; // this will print all the word in the string separated by spaces
        // after that we can store all this word in a 2D string and perform operation on that also
    }
    cout<<"number of words : "<<wordcount<<endl;
    return 0;
}