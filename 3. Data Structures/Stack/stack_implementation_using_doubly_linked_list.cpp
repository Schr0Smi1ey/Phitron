#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
class node
{
    public:
        int val;
        node *next;
        node *prev;

        node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class myStack
{
    private:
        node *head = NULL;
        node *tail = NULL;
        int sz = 0;
    public: 
        void push(int x)
        {
            sz++;
            node *newnode = new node(x);
            if(head==NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        void pop()
        {
            sz--;
            node *deletenode = tail;
            tail = tail->prev;
            if(tail==NULL)
            {
                head=NULL;
            }
            else
            {
                tail->next = NULL;
            }
            delete deletenode;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            return sz==0;
        }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    myStack stk;
    int n;cin>>n;
    while(n--)
    {
        int val;cin>>val;
        stk.push(val);
    }
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}