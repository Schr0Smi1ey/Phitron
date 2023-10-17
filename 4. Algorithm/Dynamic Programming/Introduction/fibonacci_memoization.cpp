#include<bits/stdc++.h>
using namespace std;
#define int long long int
// Time Complexity : O(N)
const int N = 1e5 + 5;
int memo[N];
int fibo(int n)
{
    if(n==0 || n==1)
    return 1;
    if(memo[n] != -1)
    return memo[n];
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    memo[n] = ans1 + ans2;
    return memo[n];
}
/*
int fibo(int n)
{
    if(n <= 1)
    return 1;
    if(memo[n] != -1)
    return memo[n];
    return memo[n] = fibo(n-1) + fibo(n-2);
}
*/
signed main()
{
    int n;cin >> n;
    for(int i=0;i<=N;i++)
    memo[i] = -1;
    cout << fibo(n);
    return 0;
}