#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
//  return array from a funtion using heap memory or dynamic memory allocation
int *fun();
int main()
{
    int *arr = fun(); // taking the returned pointer of array from the fun function
    cout<<"returned array : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "; // printing the array
    }
    delete[] arr; // delete the array from the heap memory......by this we can save a good quantity of memory which we can't do with stack memory
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "; // now it will print garbage value as we delete it from the heap memory
    }
    return 0;
}
int *fun()
{
    // int arr[5]; // it's a static array....whenever we returned the array from this function this will return the pointer of the first index
    // but after this when we gonna access this element from the main funciton this will produce error cause as fun function executed it was got cleared from
    // the stack memory..so whenever we gonna try to access it from the main function it will produce a garbage
    
    
    int *arr = new int[5]; // to avoid this error we will declare the array dynamically on the heap memory 
    cout<<"enter the array values : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    return arr; // this will return a integer pointer to the main function....but after this fun function executed it will be removed 
    // from the stack but the taken array won't because we take the array in the heap memory
    // it means we can access this array from the main function also..
}