#include<bits/stdc++.h>
using namespace std;
// to_string() = converts various types, including integers, 
//floating-point numbers, and other types, to their corresponding string representations. 
int main()
{
    int n;
    float f;
    double d;
    long long int l;
    cin>>n>>f>>d>>l;
    string str = to_string(n);
    string fl = to_string(f);
    string dou = to_string(d);
    string lon = to_string(l);
    cout<<str<<endl<<fl<<endl<<dou<<endl<<lon;
}