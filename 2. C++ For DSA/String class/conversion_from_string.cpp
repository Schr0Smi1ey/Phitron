#include<bits/stdc++.h>
using namespace std;

// to convert string into various data types

// stoi() = convert a string to integer values
// stol() = convert a string to long values
// stoll() = convert a string to long long values
// stof() = convert a string to float values
// stod() = convert a string to double values
// stold() = convert a string to long double values
int main()
{
    string intStr = "42";
    string longStr = "1234567890";
    string longLongStr = "98765432109876";
    string floatStr = "3.14";
    string doubleStr = "2.71828";
    string longDoubleStr = "0.12345678901234567890";
    int n = stoi(intStr);
    long l = stol(longStr);
    long long ll = stoll(longLongStr);
    float f = stof(floatStr);
    double d = stod(doubleStr);
    long double ld = stold(longDoubleStr);
    cout<<n<<endl<<l<<endl<<ll<<endl<<f<<endl<<d<<endl<<ld;
    return 0;
}