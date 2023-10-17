#include<bits/stdc++.h> // Include the standard C++ libraries for input/output and data structures.
using namespace std;

// Unbounded knapsack approach to count the number of ways to make change for a target sum.
signed main() {
    int n;
    cin >> n; // Read the number of available coin denominations.
    vector<int> coin(n);
    
    for (int i = 0; i < n; i++) {
        cin >> coin[i]; // Read the values of available coin denominations.
    }

    int target_sum;
    cin >> target_sum; // Read the target sum for which change needs to be made.

    int dp[n + 1][target_sum + 1]; // Create a 2D array dp for dynamic programming.

    dp[0][0] = 1; // Initialize the base case: There is one way to make change for a target sum of 0.

    // Initialize the first row to 0, as there are no ways to make change for a non-zero sum using no coins.
    for (int i = 1; i <= target_sum; i++) {
        dp[0][i] = 0;
    }

    // Dynamic programming loop to calculate the number of ways to make change for each combination of coin denominations and target sum.
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= target_sum; j++) {
            if (coin[i - 1] <= j) {
                // If the current coin denomination can be used, calculate the number of ways by either using it or not using it.
                dp[i][j] = dp[i][j - coin[i - 1]] + dp[i - 1][j];
            } else {
                // If the current coin denomination is too large to be used, skip it and use the previous value.
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][target_sum]; // Print the number of ways to make change for the target sum.

    return 0; // Return 0 to indicate successful program execution.
}


// #include<bits/stdc++.h>
// using namespace std;
// // unbounded knapsack means i can use the same element as much as i need
// signed main()
// {
//     int n;cin >> n;
//     vector<int> coin(n);
//     for(int i=0;i<n;i++){
//         cin >> coin[i];
//     }
//     int target_sum;cin >> target_sum;
//     int dp[n+1][target_sum+1];
//     dp[0][0] = 1;
//     for(int i=1;i<=target_sum;i++){
//         dp[0][i] = 0; 
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=target_sum;j++){
//             if(coin[i-1] <= j){
//                 dp[i][j] = (dp[i][j-coin[i-1]] + dp[i-1][j]);  
//             } else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     cout << dp[n][target_sum];
//     return 0;
// }