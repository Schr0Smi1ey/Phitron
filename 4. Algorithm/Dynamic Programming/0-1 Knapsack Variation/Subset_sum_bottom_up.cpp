#include<bits/stdc++.h> // Include the standard C++ library for input/output handling.
using namespace std; // Use the standard C++ namespace.

// Define some macros for faster input/output and readability.
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0); // Fast I/O
#define endl "\n" // Newline character
#define int long long int // Define 'int' as 'long long int' for larger integers

const int INF = 1e18; // Define a constant 'INF' with a large value for infinity.

signed main() { // Start the main function.
    fastio; // Use fast I/O for faster input/output operations.

    int n; // Declare an integer 'n' to store the number of elements in the array.
    cin >> n; // Read 'n' from input.

    int arr[n], s = 0; // Declare an array 'arr' of size 'n' to store the elements, and 's' to store the sum.
    
    for (int i = 0; i < n; i++) { // Loop 'n' times to read 'n' elements into the 'arr' array.
        cin >> arr[i]; // Read each element and store it in the 'arr' array.
        s += arr[i]; // Add the element to the 's' variable to calculate the total sum.
    }

    bool dp[n + 1][s + 1]; // Declare a 2D boolean array 'dp' of size (n+1) x (s+1) for dynamic programming.

    dp[0][0] = true; // Base case: It's possible to achieve a sum of 0 with 0 elements.

    // Initialize the DP table: It's not possible to achieve any positive sum with 0 elements.
    for (int i = 1; i <= s; i++)
        dp[0][i] = false;

    // Fill in the DP table using dynamic programming.
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            // Choice 1: Check if it's possible to achieve the current sum (j) by including the current element.
            if ((j - arr[i - 1] >= 0)) {
                bool choice1 = dp[i - 1][j - arr[i - 1]];

                // Choice 2: Exclude the current element and check if the sum (j) can be achieved.
                bool choice2 = dp[i - 1][j];

                // Update the DP table with the logical OR of both choices.
                dp[i][j] = (choice1 || choice2);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    vector<int> v; // Declare a vector 'v' to store all possible sums that can be achieved using different subsets.
    set<int> st; // Declare a set 'st' to ensure unique sums.

    // Loop through the DP table to find all possible sums.
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            if (dp[i][j]) {
                if (st.insert(j).second)
                    v.push_back(j); // Store unique sums in the 'v' vector.
            }
        }
    }

    int minimum_diff = INF; // Initialize 'minimum_diff' with a large value for comparison.

    // Find the minimum difference between two possible sums.
    for (auto s1 : v) {
        int s2 = s - s1; // Calculate the second sum.
        minimum_diff = min(minimum_diff, abs(s1 - s2)); // Update 'minimum_diff' if a smaller difference is found.
    }

    cout << "Minimum difference : " << minimum_diff; // Print the minimum difference.

    return 0; // Return 0 to indicate successful execution of the program.
}


// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// const int INF = 1e18;
// signed main() {
//     fastio;
//     int n;
//     cin >> n;
//     int arr[n],s = 0;
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//         s += arr[i];
//     }
//     bool dp[n + 1][s + 1];
//     dp[0][0] = true;
//     for (int i = 1; i <= s; i++)
//         dp[0][i] = false;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j <= s; j++) {
//             if((j - arr[i - 1] >= 0)){
//                 bool choice1 = dp[i - 1][j - arr[i - 1]];
//                 bool choice2 = dp[i - 1][j];
//                 dp[i][j] = (choice1 || choice2);
//             }
//             else {
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     vector<int> v;
//     set<int> st;
//     for (int i = 0; i <= n; i++) {
//         for (int j = 0; j <= s; j++) {
//             if (dp[i][j]){
//                 if(st.insert(j).second)
//                 v.push_back(j);
//             }
//         }
//     }
//     int minimum_diff = INT_MAX;
//     for(auto s1 : v)
//     {
//         int s2 = s - s1;
//         minimum_diff = min(minimum_diff,abs(s1-s2));
//     }
//     cout << "Minimum difference : " << minimum_diff ;
//     return 0;
// }
