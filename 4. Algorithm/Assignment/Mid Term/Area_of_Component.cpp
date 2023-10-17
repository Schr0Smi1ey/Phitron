#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e3 + 5;
char str[N][N];
bool vis[N][N];
int n,m,area = 0;
int dRow[4] = {-1,0,1,0};
int dCol[4] = {0,1,0,-1};
bool is_valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m && str[i][j] == '.');
}
void read_graph()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> str[i][j];
        }
    }
}
void dfs(int sr,int sc)
{
    vis[sr][sc] = true;
    area += 1;

    for(int i=0;i<4;i++)
    {
        int nRow = sr + dRow[i];
        int nCol = sc + dCol[i];

        if(is_valid(nRow,nCol) && !vis[nRow][nCol])
        {
            dfs(nRow,nCol);
        }
    }
}
signed main()
{
    fastio;
    read_graph();
    int ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && str[i][j] != '-')
            {
                dfs(i,j);
                ans = min(ans,area);
                area = 0;
            }
        }
    }
    if(ans == INT_MAX)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << ans;
    return 0;
}