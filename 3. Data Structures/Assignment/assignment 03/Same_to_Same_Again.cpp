#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
class node
{
    public:
        int val;
        node *next;
        node(int val)
        {
            this->next = NULL;
            this->val = val;
        }
};
class mystack
{
    private:
        vector<int> arr;
    public:
        void push(int x)
        {
            arr.push_back(x);
        }
        void pop()
        {
            arr.pop_back();
        }
        int top()
        {
            return arr.back();
        }
        int size()
        {
            return arr.size();
        }
        bool empty()
        {
            return arr.size()==0;
        }
};
class myqueue
{
    private:
        node *head = NULL;
        node *tail = NULL;
        int sz=0;
    public:
        void push(int val)
        {
            sz++;
            node *newnode = new node(val);
            if(head==NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            tail = newnode;
        }
        void pop()
        {
            sz--;
            node *deletenode = head;
            head = head->next;
            delete deletenode;
            if(head==NULL)
            tail = NULL;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            return sz==0;
        }
        int front()
        {
            return head->val;
        }
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    mystack stk;
    myqueue q;
    int x;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        stk.push(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        q.push(x);
    }
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    }
    while(n--)
    {
        if(stk.top()!=q.front())
        {
            cout<<"NO";
            return 0;
        }
        stk.pop();
        q.pop();
    }
    cout<<"YES";
    return 0;
}