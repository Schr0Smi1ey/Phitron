#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
signed main()
{
    fastio;
    int n;cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1){
                cout << j;
            }
            else if(i == n){
                cout << n;
            }
            else{
                cout << i;
                for(int k=0;k<n-2;k++){
                    cout << " ";
                }
                cout << n;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}