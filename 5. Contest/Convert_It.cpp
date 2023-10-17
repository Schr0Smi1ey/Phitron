#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) ((n) & (1LL<<(i)))
#define setbit0(n,i) ((n) & (~(1LL<<(i))))
#define setbit1(n,i) ((n) | (1LL<<(i)))
#define togglebit(n,i) ((n) ^ (1LL<<i))
class node
{
    public:
        int val;
        node *left;
        node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
priority_queue<int> pq;
void input()
{
    int val;cin>>val;
    node *root;
    if(val==-1)
    root = NULL;
    else 
    root = new node(val);
    queue<node *> q;
    if(root)
    {
        q.push(root);
        pq.push(root->val);
    }

    while(!q.empty())
    {
        node *p = q.front();
        q.pop();
        int l,r;cin>>l>>r;
        node *left_child,*right_child;
        if(l==-1)
        left_child=NULL;
        else 
        {
            left_child = new node(l);
            pq.push(l);
        }
        if(r==-1)
        right_child = NULL;
        else
        {
            right_child = new node(r);
            pq.push(r);
        }

        p->left = left_child;
        p->right = right_child;

        if(left_child)
        q.push(left_child);
        if(right_child)
        q.push(right_child);
    }
}
signed main()
{
    fastio;
    input();
    int q;cin>>q;
    while(q--)
    {
        int x;cin>>x;
        if(x==1)
        {
            int val;cin>>val;
            pq.push(val);
        }
        else
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
                pq.pop();
            }
        }
    }
    return 0;
}