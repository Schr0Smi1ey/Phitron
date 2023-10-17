#include<bits/stdc++.h>
using namespace std;
/*
               10 ----Root
              / \
             20  30
            / \    \
           40 90   50
           \   \   / \ 
           60 100 70 80 ----Leaves

*/
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
void inorder(node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
    // cout<<root->val<<" ";
}
signed main()
{
    node *root = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *e = new node(60);
    node *f = new node(70);
    node *g = new node(80);
    node *h = new node(90);
    node *i = new node(100);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;
    
    // printing in inorder traversal
    inorder(root);
    return 0;
}