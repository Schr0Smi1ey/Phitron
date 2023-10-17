#include<bits/stdc++.h>
using namespace std;
// example - 01
void fun(int *p)
{
    cout<<"before assigning NULL : "<<p<<endl; // it will hold the same adress as ptr
    *p = 20;
    p = NULL; // here we initializes the p to NULL....now check does it effect in the ptr value 
    // it will not effect cause here (p) and (ptr) both are different pointer variable ..so any
    // change in p will not effect in the value of ptr..

    cout<<"p : "<<p<<endl; // it will not print 0 as we assgin NULL to it 
}
int main()
{
    int x= 10;
    int *ptr = &x;
    fun(ptr); // here we pass the (ptr)  or adress of the x to the fun function
    // which receives by pointer p....so now p hold the adress of x..any change in (*p) will effect
    // in the value of x
    cout<<x<<endl;
    cout<<*ptr<<endl;

    cout<<"after assign NULL to p, ptr : "<<ptr<<endl;
    return 0;
}


// Now we want to change to a pointer of main function by a pointer of user defined function

#include<bits/stdc++.h>
using namespace std;
void fun(int *&p) // here we pass also the adress of the pointer (ptr) means now (p) and (ptr) are same
// any change in the pointer (p) will also affect the pointer (ptr)
// this is called reference of a pointer
{
    cout<<"before assigning NULL , p : "<<p<<endl;
    p = NULL ; // assigning NULL to (p) will also NULL to (ptr)
    cout<<"after assigning NULL , p : "<<p<<endl;
}
int main()
{
    int x = 10;
    int *ptr = &x;
    cout<<"before assigning NULL to P, ptr : "<<ptr<<endl;
    fun(ptr);
    cout<<"after assigning NULL to p , ptr : "<<ptr<<endl;
    return 0;
}


// proof of pointer reference


#include<bits/stdc++.h>
using namespace std;
void fun(int *p) // the adress of (p) and (ptr) will be different by this
{
    cout<<"adress of p : "<<&p<<endl;
}
int main()
{
    int *ptr;
    fun(ptr);
    cout<<"adress of ptr : "<<&ptr<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
void fun(int *&p) // the adress of (p) and (ptr) will be same here..proof that (p==ptr)
{
    cout<<"adress of p : "<<&p<<endl;
}
int main()
{
    int *ptr;
    fun(ptr);
    cout<<"adress of ptr : "<<&ptr<<endl;
    return 0;
}