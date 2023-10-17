#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
class myStack
{
    private:
        list<int> lst;
    public:
        void push(int x)
        {
            lst.push_back(x);
        }
        void pop()
        {
            lst.pop_back();
        }
        int top()
        {
            return lst.back();
        }
        int size()
        {
            return lst.size();
        }
        bool empty()
        {
            return (lst.size()==0);
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    myStack stk;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        stk.push(val);
    }
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}