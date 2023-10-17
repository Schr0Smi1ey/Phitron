#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000]; // 2D array to store computed results (memoization)

// Function to solve the knapsack problem using dynamic programming with memoization
int knapsack(int item, int w, int *value, int *weight) // 1 based Indexing
{
    // Base case: If there are no items left or no weight left, return 0
    if (item == 0 || w == 0)
        return 0; 

    // If the result is already computed, return it from the memoization table
    if (dp[item][w] != -1)
        return dp[item][w]; 

    // If the current item can fit in the remaining weight,
    if (weight[item-1] <= w) 
    {
        // we have two choices:
        // 1. Take the item and add its value to the result.
        int take = knapsack(item - 1, w - weight[item-1], value, weight) + value[item-1];
        
        // 2. Skip the item and move on to the next one.
        int not_take = knapsack(item - 1, w, value, weight);
        
        // Store the maximum of the two choices in the memoization table.
        return dp[item][w] = max(take, not_take);
    } 
    else 
    {
        // If the current item is too heavy to fit in the remaining weight, skip it.
        return dp[item][w] = knapsack(item - 1, w, value, weight);
    }
}

signed main() {
    int n;
    cin >> n; // Input the number of items

    int value[n], weight[n]; // Arrays to store the values and weights of items

    // Input the values of the items
    for (int i = 0; i < n; i++) 
    {
        cin >> value[i];
    }

    // Input the weights of the items
    for (int i = 0; i < n; i++) 
    {
        cin >> weight[i];
    }

    int Can_take;
    cin >> Can_take; // Input the maximum weight the knapsack can carry

    // Initialize the memoization table with -1
    fill_n((int *)dp, 1000 * 1000, -1);

    // Call the knapsack function to find the maximum value that can be obtained
    cout << knapsack(n, Can_take, value, weight);

    return 0;
}
