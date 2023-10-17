#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
const int INF = 1e18;
// minimum_element_needed_to_make_target_sum
signed main()
{
    int n;cin >> n;
    int element[n];
    for(int i=0;i<n;i++){
        cin >> element[i];
    }
    int target;
    cin >> target;
    vector<vector<int>> dp(n+1,vector<int>(target+1));
    dp[0][0] = 0;
    for(int i=1;i<=target;i++)
    dp[0][i] = INF;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(element[i-1] <= j){
                dp[i][j] = min(dp[i][j-element[i-1]] + 1,dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(dp[n][target] != INF)
    cout << "To make " << target << "minimum element need : " << dp[n][target];
    else
    cout << "It's not possible to make this sum";
    return 0;
}