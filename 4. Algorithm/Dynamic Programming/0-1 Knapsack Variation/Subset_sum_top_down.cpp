#include<bits/stdc++.h>
using namespace std;

// Declare a 2D vector 'dp' to store the state of subproblems
vector<vector<int>> dp;

// Function to check if it's possible to achieve a sum using elements of an array
bool is_possible(int n, int *arr, int sum) {
    // Base case: If no elements are left to consider
    if (n == 0) {
        // Check if the required sum is also 0, return true if so
        if (sum == 0) {
            return true;
        } else {
            return false; // Otherwise, return false
        }
    }

    // Check if the result for this subproblem is already computed
    if (dp[n][sum] != -1)
        return dp[n][sum];

    // If the last element of the array is less than or equal to the current sum
    if (arr[n - 1] <= sum) {
        // Two choices:
        // 1. Include the last element and reduce the sum accordingly
        bool choice1 = is_possible(n - 1, arr, sum - arr[n - 1]);

        // 2. Exclude the last element and keep the sum as it is
        bool choice2 = is_possible(n - 1, arr, sum);

        // Store the result of this subproblem in 'dp' and return it
        return dp[n][sum] = (choice1 || choice2);
    } else {
        // If the last element is greater than the current sum, exclude it
        return dp[n][sum] = is_possible(n - 1, arr, sum);
    }
}

signed main() {
    // Read the number of elements in the array
    int n;
    cin >> n;

    // Create an array 'arr' of size 'n' to store the elements
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Read the required sum to be achieved
    int required_sum;
    cin >> required_sum;

    // Initialize the 'dp' vector with dimensions (n+1) x (required_sum+1) to -1
    dp.assign(n + 1, vector<int>(required_sum + 1, -1));

    // Check if it's possible to achieve the required sum using elements from the array
    if (is_possible(n, arr, required_sum)) {
        cout << "YES" << endl; // Output "YES" if possible
    } else {
        cout << "NO" << endl; // Output "NO" if not possible
    }

    return 0;
}
