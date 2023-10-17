#include<bits/stdc++.h> // This includes the standard C++ library header for commonly used functions and data structures.
using namespace std;

signed main() { // The main function of the program, with a "signed" keyword which is not standard C++ but may be used in some compilers.
    string a, b; // Declare two strings 'a' and 'b' for input.
    cin >> a >> b; // Read the two input strings from the standard input.

    int n = a.size(), m = b.size(); // Get the lengths of strings 'a' and 'b'.

    // Create a 2D vector 'dp' to store the dynamic programming results.
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    // Initialize the first row and first column of 'dp' to 0.
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }

    // Use dynamic programming to fill the 'dp' matrix.
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; // If the characters match, extend the LCS by 1.
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // If characters don't match, take the maximum of the two adjacent cells.
            }
        }
    }

    int i = n, j = m; // Start from the bottom-right corner of 'dp'.
    string str = ""; // Initialize an empty string to store the LCS.

    // Reconstruct the LCS by backtracking through the 'dp' matrix.
    while (i != 0 && j != 0) {
        if (a[i - 1] == b[j - 1]) {
            str += a[i - 1]; // Append the matching character to the LCS.
            i--;
            j--;
        } else {
            if (dp[i - 1][j] > dp[i][j - 1]) {
                i--; // Move to the cell with a greater value in the top row.
            } else {
                j--; // Move to the cell with a greater value in the left column.
            }
        }
    }

    reverse(str.begin(), str.end()); // Reverse the LCS string to get the correct order.

    cout << "Longest Common Subsequence: " << str; // Print the LCS.
    return 0; // Return 0 to indicate successful execution of the program.
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
    int i = n,j = m;
    string str = "";
    while(i != 0 && j != 0){
        if(a[i-1] == b[j-1]){
            str += a[i-1];
            i--;j--;
        }else{
            if(dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else{ // In case if both are equal means we can form multiple subsequences of same size
                j--;
            }
        }
    }
    reverse(str.begin(),str.end());
    cout << "Longest Common Subsequences : " << str;
    return 0;
}