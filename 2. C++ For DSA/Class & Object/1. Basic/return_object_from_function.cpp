#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// return object from a function
using namespace std;
class student // declaring object
{
    public: // access modifier
        char name[100];
        int cls;
        char section;
        int roll;

        student(char str[],int c,char ch,int r) // constructor
        {
            strcpy(name,str);
            cls = c;
            section = ch;
            roll = r;
        }
};
// function where will declare and assigning values to a object then will return it
student fun() // return type will be as same as the class name
{
    char str[100];
    int roll,cls;
    char ch;
    cout<<"enter student name : ";
    gets(str);
    cout<<"enter student class : ";
    cin>>cls;
    cout<<"enter student section : ";
    cin>>ch;
    cout<<"enter student roll : ";
    cin>>roll;   
    student stdnt(str,cls,ch,roll); // assgining values to stdnt using constructor
    return stdnt; // this will return the object by RVO(return value optimization)
}
int main()
{
    student rahim = fun(); // (returned value of (stdnt) will assign to rahim)
    cout<<rahim.name<<" "<<rahim.cls<<" "<<rahim.section<<" "<<rahim.roll<<endl;
    return 0;
}