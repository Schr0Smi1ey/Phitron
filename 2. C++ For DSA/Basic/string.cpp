#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
// string input and output
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char str[n+1];
    cout<<"Enter a string : ";
    cin.getline(str,100); // this will not take  (enter) as input like (gets,fgets)
    cout<<str;
    cout<<"\n"<<strlen(str); // to use strlen we must have to use (string.h) library
    return 0;
}