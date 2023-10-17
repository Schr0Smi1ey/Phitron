#include<bits/stdc++.h> // Include necessary libraries
using namespace std;

signed main() 
{
    int n;
    cin >> n; // Input the number of items

    int value[n], weight[n]; // Arrays to store the values and weights of items

    // Input the values of the items
    for (int i = 0; i < n; i++)
        cin >> value[i];

    // Input the weights of the items
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    int Can_take;
    cin >> Can_take; // Input the maximum weight the knapsack can carry

    int dp[n + 1][Can_take + 1]; // 2D array to store computed results (DP table)

    // Initialize the DP table
    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= Can_take; j++) 
        {
            if (i == 0 || j == 0) 
            {
                dp[i][j] = 0; // Base case: If there are no items or no weight, set value to 0
            }
        }
    }

    // Dynamic Programming to solve the knapsack problem
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= Can_take; j++) 
        {
            if (weight[i - 1] <= j) 
            {
                // If the current item can fit in the remaining weight, calculate two options:
                // 1. Taking the current item and adding its value.
                int take = dp[i - 1][j - weight[i - 1]] + value[i - 1];

                // 2. Not taking the current item and using the previous result.
                int not_take = dp[i - 1][j];

                // Store the maximum of the two options in the DP table.
                dp[i][j] = max(take, not_take);

                /*
                    DP state : 
                    dp[i][j] = max(dp[i-1][j-weight[i-1]]+value[i-1],dp[i-1][j]);
                */

            } 
            else 
            {
                // If the current item is too heavy, skip it and use the previous result.
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Output the maximum value that can be obtained
    cout << "Ans : " << dp[n][Can_take] << endl;

    // Print the DP table for reference
    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= Can_take; j++) 
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

                