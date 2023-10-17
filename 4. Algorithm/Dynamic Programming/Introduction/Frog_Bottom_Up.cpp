#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n;cin >> n;
    int arr[n+1],dp[n+1];
    for(int i=1;i<=n;i++)cin >> arr[i];
    dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);
    for(int i=3;i<=n;i++)
    {
        int choice1 = dp[i-1] + abs(arr[i] - arr[i-1]);
        int choice2 = dp[i-2] + abs(arr[i] - arr[i-2]);
        dp[i] = min(choice1,choice2);
    }
    cout << dp[n];
    return 0;
}