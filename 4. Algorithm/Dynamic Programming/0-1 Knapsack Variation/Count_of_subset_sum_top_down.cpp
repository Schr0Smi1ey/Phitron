#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int Count(int n,int *arr,int sum){
    if(n == 0){
        if(sum == 0){
            return 1;
        }
        else {
            return 0;
        }
    }
    if(dp[n][sum] != -1)
    return dp[n][sum];
    if(arr[n-1] <= sum)
    {
        int choice1 = Count(n-1,arr,sum - arr[n-1]);
        int choice2 = Count(n-1,arr,sum);
        return dp[n][sum] =(choice1 + choice2);
    }
    else
    {
        return dp[n][sum] = Count(n-1,arr,sum);
    }
}
signed main(){
    int n;cin >> n;int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int required_sum;cin >> required_sum;
    dp.assign(n+1,vector<int>(required_sum+1,-1));
    cout << Count(n,arr,required_sum);
    return 0;
}