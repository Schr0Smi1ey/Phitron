#include<bits/stdc++.h>
using namespace std;
// print shortest common supersequence
signed main()
{
    string a,b;cin >> a >> b;
    int n = a.size(),m = b.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int LCS = dp[n][m];
    cout << "Minimum Deletion To make B : " << a.size() - LCS << endl;
    cout << "Minimum insertion To make A : " << b.size() - LCS << endl;
    return 0;
}