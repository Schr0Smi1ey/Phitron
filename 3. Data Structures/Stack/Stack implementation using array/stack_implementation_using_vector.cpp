#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
class myStack
{
    private:
        vector<int> v;
    public:
        void push(int x)
        {
            v.push_back(x);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            return v.size()==0;
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    myStack stk;
    stk.push(2);
    stk.push(4);
    stk.push(6);
    stk.push(7);

    // taking input 
    int n;cin>>n;
    while(n--)
    {
        int x;cin>>x;stk.push(x);
    }
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}