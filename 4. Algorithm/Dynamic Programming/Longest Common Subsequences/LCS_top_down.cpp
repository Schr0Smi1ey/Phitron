#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;  // Define a 2D vector to store memoization values.

// Function to calculate the Longest Common Subsequence (LCS).
int lcs(string a, int n, string b, int m) {
    if (n == 0 || m == 0)
        return 0;  // Base case: If either string is empty, LCS size is 0.

    if (dp[n][m] != -1) {
        return dp[n][m];  // If the result is already calculated, return it.
    }

    if (a[n - 1] == b[m - 1]) {
        // If the last characters of both strings match, add 1 to the LCS length.
        int ans = 1 + lcs(a, n - 1, b, m - 1);
        return dp[n][m] = ans;  // Memoize the result and return it.
    }
    else {
        // If the last characters don't match, consider two options:
        int opt1 = lcs(a, n - 1, b, m);  // Option 1: Exclude the last character of 'a'.
        int opt2 = lcs(a, n, b, m - 1);  // Option 2: Exclude the last character of 'b'.
        // Choose the maximum of the two options as the LCS length.
        return dp[n][m] = max(opt1, opt2);
    }
}

signed main() {
    string a, b;
    cin >> a >> b;  // Input two strings 'a' and 'b'.

    int n = a.size(), m = b.size();  // Get the lengths of the strings.

    // Initialize the memoization table with -1.
    dp.assign(n + 1, vector<int>(m + 1, -1));

    // Call the 'lcs' function to find the length of the LCS.
    int lcs_length = lcs(a, n, b, m);

    // Output the length of the Longest Common Subsequence.
    cout << "Longest Common Subsequence size: " << lcs_length << endl;

    return 0;  // End of the program.
}



#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int lcs(string a,int n,string b,int m){
    if(n == 0 || m == 0)
    return 0;
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    if(a[n-1] ==  b[m-1]){
        int ans = lcs(a,n-1,b,m-1);
        return dp[n][m] = ans + 1;
    }
    else{
        int opt1 = lcs(a,n-1,b,m);
        int opt2 = lcs(a,n,b,m-1);
        return dp[n][m] = max(opt1,opt2);
    }
}
signed main()
{
    string a,b;cin >> a >> b;
    int n = a.size(),m = b.size();
    dp.assign(n+1,vector<int>(m+1,-1));
    cout << "Longest Common subsequences size : " << lcs(a,n,b,m);
    return 0;
}