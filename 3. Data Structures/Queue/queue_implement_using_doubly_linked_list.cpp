#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
class node
{
    public:
        int val;
        node *next;
        node *prev;

        node(int val)
        {
            this->next = NULL;
            this->prev = NULL;
            this->val = val;
        }
};
class myqueue
{
    private:
        node *head = NULL;
        node *tail = NULL;
    public:
        int sz = 0;
        void push(int val)
        {
            sz++;
            node *newnode = new node(val);
            if(head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail ;
            tail = newnode;
        }
        void pop()
        {
            sz--;
            node *deletenode = head;
            head = head->next;
            if(head == NULL)
            {
                tail = NULL;
                delete deletenode;
                return;
            }
            head->prev = NULL;
            delete deletenode;
        }
        int front()
        {
            return head->val;
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
    int n;
    cin>>n;
    while(n--)
    {
        int val;cin>>val;
        q.push(val);
    }
    cout<<"size : "<<q.size()<<endl;
    cout<<"front element : "<<q.front()<<endl;
    print_queue(q);
}