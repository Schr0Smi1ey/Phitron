#include <bits/stdc++.h>
using namespace std;
// Target sum problem : 
/*
    you have an array and a target value. you need to assgin (+/-) in every element
    to have the target sum. count the number of subset. same as subset with given difference
*/
int countSub(vector<int>& v, int n, int diff)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];
    if (diff > sum)
        return 0;
 
    if ((diff + sum) % 2 != 0)
        return 0;
 
    int s2 = (diff + sum) / 2;
 
    int dp[n + 1][s2 + 1];
 
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
 
    for (int j = 1; j <= s2; j++)
        dp[0][j] = 0;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s2; j++) {
            if (v[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j]
                           + dp[i - 1][j - v[i - 1]];
        }
    }
 
    return dp[n][s2];
}
int main()
{
    int n, diff;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    cout << countSub(v, n, diff) << endl;
 
    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int

// signed main() {
//     fastio;

//     int n;
//     cin >> n;
//     int arr[n], sum = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     int diff;
//     cin >> diff;

//     int required_sum = (sum + diff) / 2;
//     int dp[n + 1][required_sum + 1];

//     dp[0][0] = 1;

//     for (int i = 1; i <= required_sum; i++)
//         dp[0][i] = 0;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j <= required_sum; j++) {
//             if ((j - arr[i - 1] >= 0)) {
//                 int choice1 = dp[i - 1][j - arr[i - 1]];
//                 int choice2 = dp[i - 1][j];
//                 dp[i][j] = (choice1 + choice2);
//             } else {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }

//     // The dp[n][required_sum] value gives you the count of subsets with the required sum.
//     int count_of_subsets = dp[n][required_sum];

//     cout << "Count of subsets with difference " << diff << " is: " << count_of_subsets;

//     return 0;
// }


