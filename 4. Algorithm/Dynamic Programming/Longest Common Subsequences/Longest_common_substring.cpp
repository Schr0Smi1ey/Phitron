#include<bits/stdc++.h> // This includes the standard C++ library header for commonly used functions and data structures.
using namespace std;

signed main() { // The main function of the program, with a "signed" keyword which is not standard C++ but may be used in some compilers.
    string a, b; // Declare two strings 'a' and 'b' for input.
    cin >> a >> b; // Read the two input strings from the standard input.

    int n = a.size(), m = b.size(); // Get the lengths of strings 'a' and 'b'.

    // Create a 2D vector 'dp' to store the dynamic programming results.
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // Initialize dp[i][j] to 0 for all i and j when i or j is 0.
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
        }
    }

    // Initialize variables to keep track of the ending position of the LCS.
    int ci = 0, cj = 0;

    // Use dynamic programming to fill the 'dp' matrix.
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; // If the characters match, extend the LCS by 1.
                // Update ci and cj when a longer common substring is found.
                if (dp[i][j] > dp[ci][cj]) {
                    ci = i;
                    cj = j;
                }
            } else {
                dp[i][j] = 0; // If characters don't match, reset the length to 0.
            }
        }
    }

    // Print the length of the Longest Common Substring.
    cout << "Longest Common Substring Length: " << dp[ci][cj] << endl;

    // Print the dynamic programming table.
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Reconstruct and print the Longest Common Substring.
    string str = "";
    while (ci != 0 && cj != 0) {
        if (a[ci - 1] == b[cj - 1]) {
            str += a[ci - 1];
            ci--;
            cj--;
        } else {
            break; // Break the loop if characters don't match.
        }
    }
    reverse(str.begin(), str.end()); // Reverse the LCS string to get the correct order.

    cout << "Longest Common Substring: " << str; // Print the Longest Common Substring.
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
        for(int j=0;j<=m;j++){
            if(i==0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }
    int ci = 0,cj = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                if(dp[i][j] > dp[ci][cj]){
                ci = i;cj = j;
                }
            }else{
                dp[i][j] = 0;
            }
        }
    }
    cout << "Longest common substring length : " << dp[ci][cj] << endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Printing Longest Common substring
    string str = "";
    while(ci != 0 && cj != 0){
        if(a[ci-1] == b[cj-1]){
            str += a[ci-1];
            ci--;cj--;
        }
        else{
            break;
        }
    }
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}