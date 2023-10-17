// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
// #define endl "\n"
// #define int long long int
// bool is_possible(int n,vector<int> arr,int w){
//     vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
//     for(int i=0;i<=n;i++){
//         for(int j = 0;j<=w;j++){
//             if(i == 0 || j==0){
//                 dp[i][j] = 0;
//             }
//         }
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(arr[i-1] <= j){
//                 dp[i][j] = max(dp[i][j-arr[i-1]],dp[i-1][j]);
//             }
//             else{
//                 dp[i][j] = dp[i-1][j];
//             }
//         }
//     }
//     return dp[n][w] != 0;
// }
// signed main()
// {
//     fastio;
//     int t;cin >> t;
//     while(t--){
//         int n,m;cin >> n >> m;
//         vector<int> value(n);
//         for(int i=0;i<n;i++){
//             cin >> value[i];
//         }
//         int required_sum = 1000 - m;
//         if(required_sum == 0){
//             cout << "YES" << endl;
//             continue;
//         }
//         if(is_possible(n,value,required_sum)){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO"  << endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n,m;
    cin >> n >> m;
    int arr[n],required_sum = 1000 - m;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool dp[n + 1][required_sum + 1];
    dp[0][0] = true;
    for (int i = 1; i <= required_sum; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= required_sum; j++) {
            if((j - arr[i - 1] >= 0)){
                bool choice1 = dp[i][j - arr[i - 1]];
                bool choice2 = dp[i - 1][j];
                dp[i][j] = (choice1 || choice2);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    if(dp[n][required_sum]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
signed main() {
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}
