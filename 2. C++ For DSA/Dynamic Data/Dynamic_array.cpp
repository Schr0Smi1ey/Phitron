#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int *arr = new int[5]; 
    // (new int[10]) = this will dynamically declare an array of size of ten in the heap memory and will return a memory adress
    //(int *arr) = this will be declared in the stack memory and will hold the returned adress
    for(int i=0;i<5;i++)
    cin>>arr[i]; // taking input as same as we used to do in a static array
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" "; // printing output as same as we used in a static array
    return 0;
}


