#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// increasing array size
int main()
{
    int *arr = new int[5]; // declare a dynamic memory
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int *arr2 = new int[7]; // declare an another dynamic memory with bigger size
    for(int i=0;i<5;i++)
    {
        arr2[i] = arr[i]; // copying the first array to it
    }
    cout<<"put the rest value in the new array : ";
    for(int i=5;i<7;i++)
    {
        cin>>arr2[i]; // scanning the rest value in the new array
    }
    cout<<"new array : ";
    for(int i=0;i<7;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    delete[] arr; //(delete[]) = this keyword is used for delete an array from the heap memory
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" "; // checking weather the first array got delete or not
        // this will print the garbage value as it got deleted
    }
    return 0;
}