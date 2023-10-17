#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e5 + 5;
// Bottom Up DP
int dp[N];
int solve(int *arr,int n)
{
    if(n==1)
    return 0;
    if(dp[n] != -1)
    return dp[n];
    else if(n==2)
    {
        return dp[n] = abs(arr[2] - arr[1]);
    }
    else
    {
        int ans1 = solve(arr,n-1) + abs(arr[n] - arr[n-1]);
        int ans2 = solve(arr,n-2) + abs(arr[n] - arr[n-2]);
        return dp[n] = min(ans1, ans2);
    }
}
signed main()
{
    fastio;
    int n;cin >> n;int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        dp[i] = -1;
    }
    cout << solve(arr,n);
    return 0;
}