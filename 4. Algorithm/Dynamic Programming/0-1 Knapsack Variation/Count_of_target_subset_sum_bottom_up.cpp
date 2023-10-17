#include<bits/stdc++.h>
using namespace std;

// Fast I/O and macros
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

signed main() {
    fastio;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int required_sum;
    cin >> required_sum;
    int dp[n + 1][required_sum + 1];

    // Initialize the base case for DP (no elements used to make sum 0)
    dp[0][0] = 1;

    // Initialize the DP table for cases where no elements are used to make non-zero sums
    for (int i = 1; i <= required_sum; i++)
        dp[0][i] = 0;

    // Loop through elements and target sums to fill in DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= required_sum; j++) {
            // Choice 1: Check if it's possible to achieve the current sum (j) by including the current element
            
            if((j - arr[i - 1] >= 0))
            {
                int choice1 =  dp[i - 1][j - arr[i - 1]];
                // Choice 2: Exclude the current element and check if the sum (j) can be achieved
                int choice2 = dp[i - 1][j];

                // Update DP table with the total number of ways to make the current sum (j)
                dp[i][j] = (choice1 + choice2);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }

            /*
                DP State : 
                dp[i][j] = (dp[i-1][j-arr[i-1]]) + (dp[i-1][j]);
                // This computes the number of ways to make sum 'j' using the first 'i' elements.
            */
        }
    }

    // Print the DP table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= required_sum; j++) {
            cout << dp[i][j] << " "; // Print DP values
        }
        cout << endl; // Move to the next row
    }

    // Print the total number of ways to make the required sum
    cout << "Ways to make " << required_sum << " : " << dp[n][required_sum];

    return 0;
}
