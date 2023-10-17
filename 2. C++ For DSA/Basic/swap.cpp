#include<bits/stdc++.h>
using namespace std;
// we will do swap manually by build a swap function
void my_swap(int *a,int *b);
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    my_swap(&a,&b);
    cout<<"a : "<<a<<"\n"<<"b : "<<b;
    return 0;
}
void my_swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

#include<bits/stdc++.h>
using namespace std;
// now we will perform swap using built in fucntion in C++(swap)
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    swap(a,b);
    cout<<"a : "<<a<<"\n"<<"b : "<<b;
    return 0;
}