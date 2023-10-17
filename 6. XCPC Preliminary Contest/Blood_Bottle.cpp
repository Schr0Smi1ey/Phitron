#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    string str;cin >> str;
    priority_queue<int> pq;
    int n = str.size();
    for(int i=0;i<str.size();i++){
        int cnt = 0;
        if(str[i] == '1'){
            while(i<str.size() && str[i] == '1'){
                cnt++;
                i++;
            }
            pq.push(cnt);
        }
    }
    int zaza = 0;
    while(!pq.empty()){
        zaza+= pq.top();
        if(!pq.empty())
        pq.pop();
        if(!pq.empty())
        pq.pop();
    }
    cout << zaza << endl;
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
// 3
// 3
// 2
// 0
// 6