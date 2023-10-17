#include<bits/stdc++.h> // Include the standard C++ libraries for input/output and data structures.
using namespace std;

vector<vector<int>> dp; // Define a 2D vector dp for dynamic programming.

int unbounded_knapsack(int n, int w, vector<int> value, vector<int> weight) {
    if (n == 0 || w == 0) // Base case: If there are no items to consider or no capacity left in the knapsack, return 0.
        return 0;
    
    if (dp[n][w] != -1) // If the value for this combination of 'n' items and capacity 'w' has already been calculated, return it.
        return dp[n][w];

    if (weight[n - 1] <= w) { // If the weight of the current item is less than or equal to the remaining capacity.
        // Calculate two choices: 
        // 1. Include the current item, add its value, and reduce the capacity accordingly.
        int choice1 = unbounded_knapsack(n, w - weight[n - 1], value, weight) + value[n - 1];
        // 2. Exclude the current item and move to the next item.
        int choice2 = unbounded_knapsack(n - 1, w, value, weight);
        // Return the maximum of the two choices.
        return dp[n][w] = max(choice1, choice2);
    }
    else {
        // If the weight of the current item exceeds the remaining capacity, exclude it and move to the next item.
        return dp[n][w] = unbounded_knapsack(n - 1, w, value, weight);
    }
}

signed main() {
    int n, knapsack_capacity;
    cin >> n >> knapsack_capacity; // Read the total number of items and the knapsack's capacity.

    vector<int> value(n), weight(n); // Create vectors to store values and weights of each item.

    for (int i = 0; i < n; i++) {
        cin >> value[i]; // Read the value of each item.
    }
    
    for (int i = 0; i < n; i++) {
        cin >> weight[i]; // Read the weight of each item.
    }

    dp.assign(n + 1, vector<int>(knapsack_capacity + 1, -1)); // Initialize the DP table with -1.

    cout << unbounded_knapsack(n, knapsack_capacity, value, weight); // Calculate and print the maximum value achievable.
    
    return 0; // Return 0 to indicate successful program execution.
}






// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> dp;
// int unbounded_knapsack(int n,int w,vector<int> value,vector<int> weight){
//     if(n== 0 || w == 0)
//     return 0;
//     if(dp[n][w] != -1) 
//     return dp[n][w];
//     if(weight[n-1] <= w){
//         int choice1 = unbounded_knapsack(n,w-weight[n-1],value,weight ) + value[n-1];
//         int choice2 = unbounded_knapsack(n-1,w,value,weight);
//         return dp[n][w] = max(choice1,choice2);
//     }
//     else{
//         return dp[n][w] = unbounded_knapsack(n-1,w,value,weight);
//     }
// }
// signed main()
// {
//     int n,knapsack_capacity;cin >> n >> knapsack_capacity;
//     vector<int> value(n),weight(n);
//     for(int i=0;i<n;i++){
//         cin >> value[i];
//     }
//     for(int i=0;i<n;i++){
//         cin >> weight[i];
//     }
//     dp.assign(n+1,vector<int>(knapsack_capacity+1,-1));
//     cout << unbounded_knapsack(n,knapsack_capacity,value,weight);
//     return 0;
// }