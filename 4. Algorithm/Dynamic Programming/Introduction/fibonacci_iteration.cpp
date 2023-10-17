#include<bits/stdc++.h>
using namespace std;
#define int long long int
// Time Complexity : O(N)
signed main()
{
    int n;cin >> n;
    int fibo[n+1];
    fibo[0] = 1;
    fibo[1] = 1;
    for(int i=2;i<=n;i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
        cout << fibo[i] << endl;
    }
    cout << fibo[n];
    return 0;
}