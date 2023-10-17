#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// making dynamic object  
// we used dynamic array to return from function but we can return object from function then what's out motive 
// to use dynamic object ?
// motive : to save memory....by using dynamic object we can free it which we can't do .....if we use 
// static object
class student
{
    public:
        char name[100];
        int cls;
        char section;
        int roll;

        // building the constructor
        student(char str[],int c,char ch,int r)
        {
            strcpy(name,str);
            cls = c;
            section = ch;
            roll = r;
        }
};
// making function to return object
student *fun()
{
    char str[100],ch;
    int roll,cls;
    cout<<"enter student name : ";
    gets(str);
    cout<<"enter student class : ";
    cin>>cls;
    cout<<"enter student section : ";
    cin>>ch;
    cout<<"enter student roll : ";
    cin>>roll;   

    // now here we will declare the dynamic object
    student *stdnt = new student(str,cls,ch,roll);
    return stdnt;
}
int main()
{
    student *rahim = fun();
    // now we can't print (rahim) value using (rahil.) as it's not a variable..it's a pointer
    // so to print rahim value we have to first de-reference rahim..then we can access and print (rahim.) value
    
    cout<<(*rahim).name<<endl;
    cout<<(*rahim).cls<<endl;
    cout<<(*rahim).section<<endl;
    cout<<(*rahim).roll<<endl;
    // but de-referencing always is become little bit harder
    // that's why we use a shortcut as de-referencing

    // (*rahim.cls) == rahim->class
    // arrow sign 
    // shortcut sign = (->) // we can use this sign only to derefencing a object
    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->roll<<endl;

    delete rahim; // we free the memory by deleting the object
}


