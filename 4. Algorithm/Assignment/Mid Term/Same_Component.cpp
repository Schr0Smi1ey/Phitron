#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int n,m,sr,sc,dr,dc;
const int N = 1e3 + 5;
bool source,destination;
char str[N][N];
bool vis[N][N];
int dRow[] = {-1,0,1,0};
int dCol[] = {0,1,0,-1};
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
bool is_valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j<m && str[i][j] != '-');
}
void dfs(int si,int sj)
{
    vis[si][sj] = true;
    if(si == sr && sj == sc)
    source = true;
    if(si == dr && sj == dc)
    destination = true;

    for(int i=0;i<4;i++)
    {
        int nRow = si + dRow[i];
        int nCol = sj + dCol[i];

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
    cin >> sr >> sc >> dr >> dc;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(!vis[i][j] && str[i][j] != '-')
            {
                source = false;
                destination = false;
                dfs(i,j);
                flag |= (source && destination);
            }
        }
    }
    if(flag) cout << "YES" ;
    else
    cout << "NO" ;
    return 0;
}