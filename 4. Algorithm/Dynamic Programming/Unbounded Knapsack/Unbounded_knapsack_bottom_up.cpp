#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n,knapsack_capacity;cin >> n >> knapsack_capacity;
    vector<int> value(n),weight(n);
    for(int i=0;i<n;i++){
        cin >> value[i];
    }
    for(int i=0;i<n;i++){
        cin >> weight[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(knapsack_capacity+1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=knapsack_capacity;j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=knapsack_capacity;j++){
            if(weight[i-1] <= j){
            dp[i][j] = max(dp[i][j-weight[i-1]]+value[i-1],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][knapsack_capacity] ;
    return 0;
}