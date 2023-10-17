#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
class myqueue
{
    private:
        list<int> lst;
    public:
        void push(int val)
        {
            lst.push_back(val);
        }
        void pop()
        {
            lst.pop_front();
        }
        int size()
        {
            return lst.size();
        }
        int front()
        {
            return lst.front();
        }
        bool empty()
        {
            return lst.size()==0;
        }
};
void print_queue(myqueue q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    myqueue q;
    int n;cin>>n;
    while(n--)
    {
        int val;cin>>val;
        q.push(val);
    }
    cout<<"size : "<<q.size()<<endl;
    cout<<"front element : "<<q.front()<<endl;
    print_queue(q);
}