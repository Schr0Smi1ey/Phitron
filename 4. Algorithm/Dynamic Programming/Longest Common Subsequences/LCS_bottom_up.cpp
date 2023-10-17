#include<bits/stdc++.h>
using namespace std;

signed main() {
    string a, b;
    cin >> a >> b;  // Input two strings 'a' and 'b'.

    int n = a.size(), m = b.size();  // Get the lengths of the input strings.

    // Create a 2D vector 'dp' of size (n+1) x (m+1) to store LCS lengths.
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // Initialize the first row and first column of 'dp' to 0 (base case).
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= m; i++) {
        dp[0][i] = 0;
    }

    // Iterate through both input strings to calculate LCS lengths.
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                // If the characters at the current positions match, increment LCS length.
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                // If characters do not match, take the maximum of left and top cells.
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Output the length of the Longest Common Subsequence.
    cout << "Longest subsequence length: " << dp[n][m] << endl;

    return 0;  // End of the program.
}



#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string a,b;cin >> a >> b;
    int n = a.size(),m = b.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
        dp[0][i] = 0;
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
    cout << "Longest subsequence length : " << dp[n][m];
    return 0;
}