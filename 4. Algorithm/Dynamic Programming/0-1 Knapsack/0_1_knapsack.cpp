#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

// Function to solve the knapsack problem using recursion
int knapsack(int item, int w, int *value, int *weight) // 0 based indexing
{
     // Base case: If there are no items left or no weight left, return 0
    if(item < 0 || w == 0)
        return 0;
    // If the current item can fit in the remaining weight, we have two choices:
    if(weight[item] <= w)
    {
        // 1. Take the item and add its value to the result.
        int take = knapsack(item-1, w-weight[item], value, weight) + value[item];
        
        // 2. Skip the item and move on to the next one.
        int not_take = knapsack(item-1, w, value, weight);
        
        // Return the maximum of the two choices.
        return max(take, not_take);
    }
    else
    {
        // If the current item is too heavy to fit in the remaining weight, skip it.
        return knapsack(item-1, w, value, weight);
    }
}
signed main()
{
    fastio;
    int n;
    cin >> n;

    int value[n], weight[n]; // Arrays to store the values and weights of items

    // Input the values of the items
    for(int i=0; i<n; i++)
    {
        cin >> value[i];
    }

    // Input the weights of the items
    for(int i=0; i<n; i++)
    {
        cin >> weight[i];
    }

    int Can_take;
    cin >> Can_take; // Input the maximum weight the knapsack can carry

    // Call the knapsack function to find the maximum value that can be obtained
    cout << knapsack(n-1, Can_take, value, weight);

    return 0;
}
