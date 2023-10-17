#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
class node
{
    public:
        int val;
        node *left,*right;
        
        node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
node * input()
{
    node *root;
    int n;cin>>n;
    if(n==-1)
    root = NULL;
    else 
    root = new node(n);
    queue<node *> q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        int l,r;cin>>l>>r;
        node *left_child,*right_child;
        if(l==-1)
        left_child=NULL;
        else 
        left_child = new node(l);
        if(r==-1)
        right_child = NULL;
        else
        right_child = new node(r);
        temp->left = left_child;
        temp->right = right_child;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return root;
}
vector<int> v;
void print(node *root)
{
    if(root==NULL)
    return;
    queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        v.push_back(temp->val);
        if(temp->right)   // just call right before left
        q.push(temp->right);
        if(temp->left)
        q.push(temp->left);
    }
}
signed main()
{
    fastio;
    node *root = input();
    print(root);
    if(root==NULL)
    return 0;
    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
