#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
void solution(){
    int n;cin >> n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp,temp+n);
    int x = temp[n-1],y = temp[n-2];
    int ansx = 0,ansy = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            ansx = i;
        }
        if(arr[i] == y){
            ansy = i;
        }
        if(ansx && ansy){
            break;
        }
    }
    if(ansx > ansy){
        cout << ansy << " " << ansx <<endl;
    }
    else{
        cout << ansx << " " << ansy << endl;
    }
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