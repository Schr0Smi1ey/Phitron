#include<bits/stdc++.h>
using namespace std;
// time complexity of this code : O(n)
// max limit : 10^7
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) // O(n)
    {
        cout<<n<<" ";
    }
    for(int i=n-1;i>=0;i--) // O(n)
    {
        cout<<n<<" ";
    }
    return 0;
}

