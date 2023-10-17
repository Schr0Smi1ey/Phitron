#include<bits/stdc++.h>
using namespace std;

// Fast I/O and macros
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

const int INF = 1e18;

signed main() {
    fastio;

    int n, s = 0;
    cin >> n;
    int arr[n];
    
    // Read the array elements and calculate their sum
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }

    // Check if the sum of array elements is odd (using bitwise AND)
    if(s & 1) {
        cout << "NO"; // If the sum is odd, it's not possible to divide it into two equal parts
    } else {
        // Calculate the required sum for each part (half of the total sum)
        int required_sum = s / 2;

        // Initialize a DP array 'dp' of dimensions (n+1) x (required_sum+1)
        bool dp[n + 1][required_sum + 1];

        // Initialize base cases: dp[0][0] is true, and the rest of dp[0][i] is false
        dp[0][0] = true;
        for(int i = 1; i <= required_sum; i++) {
            dp[0][i] = false;
        }

        // Loop through elements and target sums to fill in DP table
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j <= required_sum; j++) {
                if(arr[i - 1] <= j) {
                    // Two choices:
                    // 1. Include the current element and reduce the sum accordingly
                    bool choice1 = dp[i - 1][j - arr[i - 1]];

                    // 2. Exclude the current element and keep the sum as it is
                    bool choice2 = dp[i - 1][j];

                    // Update DP table with the logical OR of the two choices
                    dp[i][j] = (choice1 || choice2);
                } else {
                    // If the current element is greater than the current sum, exclude it
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        // Check if it's possible to achieve the required sum using elements from the array
        if(dp[n][required_sum]) {
            cout << "YES"; // Output "YES" if possible
        } else {
            cout << "NO"; // Output "NO" if not possible
        }
    }

    return 0;
}








// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// const int INF = 1e18;
// signed main()
// {
//     fastio;
//     int n,s = 0;cin >> n;int arr[n];
//     for(int i=0;i<n;i++) {
//         cin >> arr[i];
//         s += arr[i];
//     }
//     if(s&1){
//         cout << "NO";
//     }
//     else{
//         int required_sum = s/2;
//         bool dp[n+1][required_sum+1];
//         dp[0][0] = true;
//         for(int i=1;i<=n;i++) dp[0][i] = false;
//         for(int i=1;i<=n;i++){
//             for(int j=0;j<=required_sum;j++){
//                 if(arr[i-1] <= j){
//                     dp[i][j] = (dp[i-1][j-arr[i-1]]) || (dp[i-1][j]);
//                 }
//                 else{
//                     dp[i][j] = dp[i-1][j];
//                 }
//             }
//         }
//         if(dp[n][required_sum]){
//             cout << "YES";
//         }
//             else{
//                 cout << "NO";
//             }
//     }
//     return 0;
// }
