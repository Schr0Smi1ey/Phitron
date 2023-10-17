#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// introducing with constructor
using namespace std;
class student
{
    public:
        char name[100];
        int cls;
        char section;
        int roll;

        // this function is got automatically called when ans object is created
        student(char s[],int c,char ch,int r) // this is the constructor (constructor name == class name)
        /// constructor is basically nothing but a function which set the object varible data automatically wheneven it
        // got called.
        // variable in the constructor can't be same as the object variable ..because the compiler
        // got confused weather it's object variable or the constructor variable
        
        // we can simply use (this= pointer to an object) keyword and can assign the same name to constructor variable also
        {
            strcpy(name,s);
            cls = c;
            section = ch;
            roll = r;
        }
};
int main()
{
    student rahim("Rahim",12,'B',220212); // here we calling the constructor with 4 parameter...this will automatically set 
    // data to student rahim // don't forget to maintain the parameter sequences
    student karim("Karim",11,'C',220216);
    cout<<rahim.name<<" "<<rahim.cls<<" "<<rahim.section<<" "<<rahim.roll<<endl;
    cout<<karim.name<<" "<<karim.cls<<" "<<karim.section<<" "<<karim.roll<<endl;
    return 0;
}


#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// we can also set value by a user defined function also
using namespace std;
class student
{
    public:
        char name[100];
        int cls;
        char section;
        int roll;
        // user defined function to assign value to object
        void setvalue(char s[],int c,char ch,int r) 
        {
            strcpy(name,s);
            cls = c;
            section = ch;
            roll = r;
        }
};
int main()
{
    student rahim;
    rahim.setvalue("Rahim",12,'B',220212); // here we calling the (setvalue()) function with 4 parameter...this will automatically set 
    // data to student rahim // don't forget to maintain the parameter sequences
    student karim;
    karim.setvalue("Karim",11,'C',220216);
    cout<<rahim.name<<" "<<rahim.cls<<" "<<rahim.section<<" "<<rahim.roll<<endl;
    cout<<karim.name<<" "<<karim.cls<<" "<<karim.section<<" "<<karim.roll<<endl;
    return 0;
}