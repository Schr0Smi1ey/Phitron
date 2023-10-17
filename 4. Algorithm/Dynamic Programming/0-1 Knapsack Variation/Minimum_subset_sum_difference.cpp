#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int

const int INF = 1e18;

signed main(){
    fastio;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int required_sum;
    cin >> required_sum;
    int dp[n + 1][required_sum + 1];

    dp[0][0] = 1;

    for (int i = 1; i <= required_sum; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= required_sum; j++) {
            if((j - arr[i - 1] >= 0))
            {
                int choice1 =  dp[i - 1][j - arr[i - 1]];
                int choice2 = dp[i - 1][j];
                dp[i][j] = (choice1 + choice2);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= required_sum; j++) {
            cout << dp[i][j] << " "; 
        }
        cout << endl; 
    }

    cout << "Ways to make " << required_sum << " : " << dp[n][required_sum];

    return 0;
}
