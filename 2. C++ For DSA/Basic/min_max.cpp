#include<bits/stdc++.h>
using namespace std;
// find max and min value by function
int my_min(int a,int b);
int my_max(int a,int b);
int main()
{
    int m,n;
    cout<<"enter two number : ";
    cin>>m>>n;
    int min = my_min(m,n);
    int max = my_max(m,n);
    cout<<"min : "<<min<<"\n"<<"max : "<<max<<"\n";
    return 0;
}
int my_min(int a,int b)
{
    if(a>b)return b;
    else
    return a;
}
int my_max(int a,int b)
{
    if(a<b)
    return b;
    else
    return a;
}


#include<bits/stdc++.h>
using namespace std;
// now we will find min and max using C++ built in funtion(min,max)
int main()
{
    int a,b;
    cout<<"Entet two number : ";
    cin>>a>>b;
    cout<<"min : "<<min(a,b)<<"\n"<<"max : "<<max(a,b)<<"\n";
    return 0;
}