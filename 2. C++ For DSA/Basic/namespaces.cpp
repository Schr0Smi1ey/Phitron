#include<bits/stdc++.h>
using namespace std;
namespace sarafat
{
    int age=24;
    void print()
    {
        cout<<"sarafat's own namespaces."<<endl;
    }
    // we can even create a class inside this namespaces
}
namespace karim
{
    int age2=30;
    void print2()
    {
        cout<<"karim's own namespaces."<<endl;
    }
}
using namespace sarafat;
using namespace karim;
int main()
{
    // without declaring the using namespaces
    // here we can declare the (age) in the same name in the two namespaces
    cout<<sarafat::age<<endl;
    sarafat::print();
    cout<<karim::age2<<endl;
    karim::print2();

    // after declaring the using namespaces
    // we declare (age) and (print) function in the two namespaces in different name otherwise it will give error as 
    // it will be confused which age it will print (sarafat) or (karim)
    cout<<age<<endl; 
    print();
    cout<<age2<<endl;
    print2();
    return 0;
}