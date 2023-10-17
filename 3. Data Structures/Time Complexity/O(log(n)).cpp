#include<bits/stdc++.h>
using namespace std;
// Time complexity of this code : O(log(n)) of base 2
// max limit : 10^18
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        cout<<n%10<<endl; 
        n/=10; // each time divided by 10;
    }
    for(int i=0;i<n;i*=2)
    {
        cout<<"hi"<<endl; // each time multiplied by 2
    }
    return 0;
}

// binary search time complexity : O(log(n))