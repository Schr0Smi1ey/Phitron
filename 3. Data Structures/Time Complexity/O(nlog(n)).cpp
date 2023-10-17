#include<bits/stdc++.h>
using namespace std;
// inner loop : O(n)
// outer loop : O(logn)
// time complexity : O(nlogn)
// max value : 10^5
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) // O(n)
    {
        int x = i;
        while(x>0) // O(logn)
        {
            cout<<x%10<<" ";
            x/=10;
        }
        cout<<endl;
    }
    return 0;
}

// O(nlogn) time complexity occur when we sort an array
