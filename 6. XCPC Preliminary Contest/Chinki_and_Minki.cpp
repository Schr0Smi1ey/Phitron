#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
#define getbit(n,i) ((n) & (1LL<<(i)))
#define setbit0(n,i) ((n) & (~(1LL<<(i))))
#define setbit1(n,i) ((n) | (1LL<<(i)))
#define togglebit(n,i) ((n) ^ (1LL<<i))
void solution(){
    int n;cin >> n;
    int arr[n],half = n/2;
    bool flag = false;
    if(n&1)
    flag = true;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> v;
    for(int mask = 0;mask<(1<<n);mask++)
    {
        int cnt = 0,temp = 0;
        for(int i=0;i<n;i++)
        {
            if(getbit(mask,i))
            {
                temp += arr[i];
                cnt++;
            }
        }
        if(flag){
            if(cnt == half || cnt == (half+1)){
                v.push_back(temp);
            }
        }
        else {
            if(cnt == half){
                v.push_back(temp);
            }
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    int ans = INT_MAX;
    int i=0,j=v.size()-1;
    while(i<j){
        ans = min(ans,v[i++]-v[j--]);
    }
    cout << ans <<endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}