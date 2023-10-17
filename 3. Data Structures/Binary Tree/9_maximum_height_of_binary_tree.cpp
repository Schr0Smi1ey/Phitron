#include<bits/stdc++.h>
using namespace std;
/*
    sample input : 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
    sample output : 10 20 60 30 50 70 40 80  
                        10
                       /  \
                      20   60
                     / \   /
                    30 50 70
                     \ 
                     40
                      /
                     80
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
node * input()
{
    int val;cin>>val;
    node *root;
    if(val==-1)
    root = NULL;
    else 
    root = new node(val);
    queue<node *> q;
    if(root)
    q.push(root);

    while(!q.empty())
    {
        // visits a lower level node
        node *p = q.front(); // p for parent
        q.pop();

        // works in node : take input two val(left child,right child)--->make two node(NULL node for -1 val)--->connect them with the parents--->push the child into the queue---> repeat
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

        p->left = left_child;
        p->right = right_child;

        // push the child into the queue
        if(left_child)
        q.push(left_child);
        if(right_child)
        q.push(right_child);
    }
    return root;
}

// function to get the maximum height
int maxHeight(node *root)
{
    if(root==NULL)
    return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}
signed main()
{
    node *root = input();
    cout<<"Height of the tree or the maximum depth of the tree : "<<maxHeight(root)<<endl;
    return 0;
}