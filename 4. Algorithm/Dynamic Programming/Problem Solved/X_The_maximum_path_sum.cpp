#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int dp[15][15],n,m;;
int solution(int i,int j)
{
    if(i == n-1 && j == m-1)
    return dp[i][j];
    else
    {
        int move_left = (i+1<n)?solution(i+1,j):INT_MIN;
        int move_right = (j+1<m)?solution(i,j+1):INT_MIN;
        return dp[i][j] + max(move_right,move_left);
    }
}
signed main()
{
    fastio;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin >> dp[i][j];
    }
    cout << solution(0,0);
    return 0;
}