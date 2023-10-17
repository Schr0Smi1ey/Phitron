#include <bits/stdc++.h> // Include the standard C++ libraries for input/output and data structures.
using namespace std;

class Solution{
  public:
    int cutRod(int price[], int n) { // Define a function to solve the rod cutting problem.
        int len[n+1]; // Create an array to store the possible lengths of rods.
        for(int i=0;i<n;i++){
            len[i] = i+1; // Initialize the lengths from 1 to n.
        }
        vector<vector<int>> dp(n+1,vector<int>(n+1)); // Create a 2D vector dp for dynamic programming.

        // Initialize the first row and column of dp to 0.
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
            dp[0][i] = 0;
        }

        // Dynamic programming loop to calculate the maximum profit for each combination of rod length and available lengths.
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(len[i-1] <= j) {
                    // If the current rod length can be cut from the available lengths, calculate the maximum profit.
                    dp[i][j] = max(dp[i][j-len[i-1]] + price[i-1], dp[i-1][j]);
                }
                else {
                    // If the current rod length is too long, skip it and use the previous value.
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][n]; // Return the maximum profit achievable with the given rod lengths and prices.
    }
};

int main() {
    int t;
    cin >> t; // Read the number of test cases.
    while (t--) {
        int n;
        cin >> n; // Read the length of the rod.
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i]; // Read the prices for cutting the rod at each length.
            
        Solution ob; // Create an instance of the Solution class.

        cout << ob.cutRod(a, n) << endl; // Call the cutRod function and print the maximum profit.
    }
    return 0; // Return 0 to indicate successful program execution.
}


// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//   public:
//     int cutRod(int price[], int n) {
//         int len[n+1];
//         for(int i=0;i<n;i++){
//             len[i] = i+1;
//         }
//         vector<vector<int>> dp(n+1,vector<int>(n+1));
//         for(int i=0;i<=n;i++){
//             dp[i][0] = 0;
//             dp[0][i] = 0;
//         }
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 if(len[i-1] <= j)
//                 {
//                     dp[i][j] = max(dp[i][j-len[i-1]] + price[i-1],dp[i-1][j]);
//                 }
//                 else
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//         return dp[n][n];
//     }
// };
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) 
//             cin >> a[i];
            
//         Solution ob;

//         cout << ob.cutRod(a, n) << endl;
//     }
//     return 0;
// }

// } Driver Code Ends

// class Solution{
//   public:
//     int cutRod(int price[], int n) {
//         int len[n+1];
//         for(int i=0;i<n;i++){
//             len[i] = i+1;
//         }
//         vector<vector<int>> dp(n+1,vector<int>(n+1));
//         for(int i=0;i<=n;i++){
//             dp[i][0] = 0;
//             dp[0][i] = 0;
//         }
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 if(len[i-1] <= j)
//                 {
//                     dp[i][j] = max(dp[i][j-len[i-1]] + price[i-1],dp[i-1][j]);
//                 }
//                 else
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//         return dp[n][n];
//     }
// };