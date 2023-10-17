#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int dp[25][125];
int knapsack(int n,int w,int *value,int *weight)
{
    if(n<0 || w==0)
    return 0;
    if(dp[n][w] != -1)
    return dp[n][w];
    if(weight[n] <= w)
    {
        return dp[n][w] = max(knapsack(n-1,w-weight[n],value,weight)+value[n],knapsack(n-1,w,value,weight));
    }
    else
    {
        return dp[n][w] = knapsack(n-1,w,value,weight);
    }
}
signed main()
{
    fastio;
    int n,s;cin >> n >> s;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            dp[i][j]  = -1;
        }
    }
    int weight[n],value[n];
    for(int i=0;i<n;i++)
    cin >> weight[i] >> value[i];
    cout << knapsack(n-1,s,value,weight);
    return 0;
}