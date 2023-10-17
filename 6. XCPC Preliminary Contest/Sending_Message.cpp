#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int INF = 1e18;
bool possible(string a,string b){
    int i=0,j=0;
    int n = a.size(),m = b.size();
    while(i<n && j<m){
        if(a[i] == b[j]){
            j++;
        }
        i++;
    }
    if(j == m){
        return true;
    }
    else
    return false;
}
signed main()
{
    fastio;
    string str1,str2;
    while(cin >> str1 >> str2){
        if(possible(str1,str2)){
            cout <<"Possible" << endl;
        }
        else{
            cout << "Impossible" << endl;
        }
    }
    return 0;
}