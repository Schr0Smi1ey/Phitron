#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
bool knapsack(int n,int *arr,int sum ,int x)
{
    if(n == 0)
    {
        if(sum == x)
        return true;
        return false;
    }
    return (knapsack(n-1,arr,sum - arr[n-1],x) || knapsack(n-1,arr,sum + arr[n-1],x));
}
signed main()
{
    fastio;
    int n,x,sum = 0;cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(knapsack(n,arr,sum,x))
    cout <<"YES";
    else
    cout << "NO";
    return 0;
}
