#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<int> stk;
    stk.push(10); 
    stk.pop();
    int n;cin>>n;while(n--)
    {
        int val;cin>>val;
        stk.push(val); // using of push()
    }
    cout<<"size : "<<stk.size()<<endl; // using of size()
    while(!stk.empty()) // using of empty()
    {
        cout<<stk.top()<<" "; // using of top()
        stk.pop(); // using of pop()
    }
    return 0;
}