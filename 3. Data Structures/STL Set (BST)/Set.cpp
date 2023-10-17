#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
/*
    Totol Time complexity : O(NlogN)
    
    ## use Balanced BST

    1.sorting 
    2. searching
    3. removes duplicate
*/
signed main()
{
    fastio;
    set<int> st;
    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;
        st.insert(x); // O(logN)
    }
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // check weather a value present in the set or not
    if(st.count(5)) // O(logN)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}