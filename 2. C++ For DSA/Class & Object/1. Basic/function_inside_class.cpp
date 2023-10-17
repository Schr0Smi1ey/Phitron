#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        int math;
        int chemistry;
        
        person(string nm,int a,int m,int chem)
        {
            name = nm;
            age = a;
            math = m;
            chemistry = chem;
        }

        // making a print function inside class
        void print()
        {
            cout<<name<<" "<<age<<endl;
        }
        // this function will return the sum value of math and chemistry
        int total_marks()
        {
            return math+chemistry;
        }

        /// we can make as much as function inside the class according to our need
};
int main()
{
    person sarafat("sarafat karim",21,90,80);
    // cout<<sarafat.name<<" "<<sarafat.age<<endl;
    sarafat.print();
    cout<<"total marks : "<<sarafat.total_marks(); // this call the total_marks function 
    // and will print the return value
    return 0;
}