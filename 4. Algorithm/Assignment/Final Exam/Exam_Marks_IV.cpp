#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        int  n,m;cin >> n >> m;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int target = 1000 - m;
        vector<vector<int>> dp(n+1,vector<int>(target + 1));
        dp[0][0] = 1;
        for(int i=1;i<=target;i++){
            dp[0][i] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=target;j++){
                if(arr[i-1] <= j){
                    dp[i][j] = ((dp[i][j-arr[i-1]] + dp[i-1][j])) % MOD;
                }
                else{
                    dp[i][j] = (dp[i-1][j]) % MOD;
                }
            }
        }
        cout << dp[n][target] << endl;
    }
    return 0;
}