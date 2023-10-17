#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool solution(int x,int n)
{
    if(x > n)
    return false;
    if(x == n)
    return true;
    return (solution(x*10,n) || solution(x*20,n));
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        if(solution(1,n))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}