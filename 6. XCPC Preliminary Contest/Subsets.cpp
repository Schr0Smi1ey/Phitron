#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void solution(){
    int n, target;
    cin >> n >> target;
    int max_sum = 0;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        max_sum += v[i];
    }
    if (target > max_sum || (target + max_sum) % 2 != 0){
        cout << 0 << endl;
        return;
    }
    int needed = (target + max_sum) / 2;
    int dp[n + 1][needed + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int j = 1; j <= needed; j++)
        dp[0][j] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= needed; j++) {
            if (v[i - 1] <= j)
                dp[i][j] = (dp[i - 1][j]+ dp[i-1][j - v[i - 1]]) % MOD;  
            else
                dp[i][j] = (dp[i - 1][j]) % MOD;
        }
    }
 
    cout << dp[n][needed] << endl;
}
int main()
{
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}