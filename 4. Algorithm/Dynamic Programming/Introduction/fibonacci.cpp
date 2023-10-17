#include<bits/stdc++.h>
using namespace std;
// Time Complexity : O(2^n)
int fibo(int n)
{
    if(n==0 || n==1)
    return 1;
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    return ans1 + ans2;
}
signed main()
{
    int n;cin >> n;
    cout << fibo(n) ;
    return 0;
}