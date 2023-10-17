#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int *ptr = new int;
    // (new int) = allocate memory dinamically on the heap memory and return the adress of that memory
    // (*ptr) will be in the stack memory
    // to access that returned adress we are using pointer..
    *ptr = 10;// assigning value on that adress by dereferencing
    cout<<ptr<<" "<<*ptr<<endl;
    // ptr will print the adress which was dynamically allocated
    // *ptr will print the value of this adress

    float *f = new float;
    *f = 2.33;
    cout<<f<<" "<<*f<<endl;
    return 0;
}