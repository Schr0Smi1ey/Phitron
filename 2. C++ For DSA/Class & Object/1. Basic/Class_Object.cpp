#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// declaring class
class student
{
    public: // access modifier
        char name[100];
        int cls; 
        char section;
        int roll;           
}; // must have to use semicolon 
int main()
{
    student karim;
    char temp[100] = "karim";
    strcpy(karim.name,temp);
    karim.cls = 11;
    karim.section = 'A';
    karim.roll = 220216;
    

    student rahim;
    char temp2[100] = "Rahim";
    strcpy(rahim.name,temp2);
    rahim.cls = 14;
    rahim.section = 'B';
    rahim.roll = 220212;

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.section<<" "<<rahim.cls<<endl;
    cout<<karim.name<<" "<<karim.roll<<" "<<karim.section<<" "<<karim.cls<<endl;
    return 0;
}