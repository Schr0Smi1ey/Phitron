#include<bits/stdc++.h>
using namespace std;
// method to copied dynamic object
class person
{
    public: 
        string name;
        int age;

        person(string name,int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    person *sarafat = new person("sarafat",21);
    person *karim = new person("karim",22);

    // run every method individually commenting others two.
    
    // method 1

    sarafat = karim; // here we exchanging the pointer 
    cout<<sarafat->name<<" "<<sarafat->age<<endl; // this will print the karim's value as sarafat value
    delete karim; // here we deleting karim
    cout<<sarafat->name<<" "<<sarafat->age<<endl; // as karim was in heap memory..after deleting karim karim won't exist in the memory
    // so exchanging pointer we are deleting karim...means sarafat will point to nothing
    // so this statement will print garbage.

    // method 2
    // TIME wasting method .. we won't use it

    sarafat->name = karim->name; // we can directly exchange the value by dereferencing of each of the value after
    // dereferencing
    sarafat->age = karim->age;
    cout<<sarafat->name<<" "<<sarafat->age<<endl;
    delete karim; // deleting karim will not affect here as we directly assign values karim
    cout<<sarafat->name<<" "<<sarafat->age<<endl;

    // method 3
    // we can directly exchange the whole object by dereferencing
    // we will use this method to copy any dynamic object 
    *sarafat = *karim;
    cout<<sarafat->name<<" "<<sarafat->age<<endl;

    return 0;
}