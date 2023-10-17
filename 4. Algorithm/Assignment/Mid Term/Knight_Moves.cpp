#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int N = 1e2 + 5;
int n, m , ki,kj,qi,qj;
int visited[N][N];
int drow[] = {1,1,-1,-1,2,-2,2,-2};
int dcol[] = {2,-2,2,-2,1,1,-1,-1};
bool is_valid(int i,int j)
{
    return (i>=0 && i<n && j>=0 && j <m && !visited[i][j]);
}
void bfs()
{
    queue<pair<int,int>> q;
    if(ki == qi && kj == qj)
    {
        cout << 0 << endl;
        return;
    }
    q.push({ki,kj});
    visited[ki][kj] = true;
    int ans = 0;
    while(!q.empty())
    {
        int size = q.size();
        ans++;

        while(size--)
        {
            pair<int,int> current = q.front();
            q.pop();
            int x = current.first;
            int y = current.second;
            for(int i=0;i<8;i++)
            {
                int nx = x + drow[i];
                int ny = y + dcol[i];
                if(nx == qi && ny == qj)
                {
                    cout << ans << endl;
                    return;
                }
                if(is_valid(nx,ny))
                {
                    q.push({nx,ny});
                    visited[nx][ny] = true;
                }
            }
        }
    }
    cout << -1 << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        for(int i=0;i<=N;i++)
        {
            for(int j = 0;j<=N;j++)
            {
                visited[i][j] = false;
            }
        }
        cin >> n >> m;
        cin >> ki >> kj >> qi >> qj;
        bfs();
    }
    return 0;
}