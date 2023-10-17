#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
/*
    20
    /\
   10 30
   \  /\
  15 25 35

  input : 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1
*/
class TreeNode
{
    public:
        int val;
        TreeNode *left;
        TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode* input()
{
    TreeNode *root;
    int val;cin>>val;
    if(val==-1)
    {
        root = NULL;
    }
    else
    root = new TreeNode(val);
    queue<TreeNode *> q;
    if(root)
    q.push(root);
    while(!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();

        TreeNode *left_child,*right_child;
        int l,r;cin>>l>>r;
        if(l==-1)
        left_child = NULL;
        else 
        left_child = new TreeNode(l);

        if(r==-1)
        right_child = NULL;
        else
        right_child = new TreeNode(r);

        temp->left = left_child;
        temp->right = right_child;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return root;
}
void insert_in_BST(TreeNode *&root,int x)
{
    if(root==NULL)
    {
        root = new TreeNode(x);
        return;
    }
    if(root->val>x)
    {
        if(root->left==NULL)
        {
            root->left = new TreeNode(x);
            return;
        }
        else
        {
            insert(root->left,x);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            root->right = new TreeNode(x);
            return;
        }
        else
        {
            insert(root->right,x);
        }
    }
}
void print_level_order(TreeNode *root)
{
    if(root==NULL)
    return;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();

        cout<<temp->val<<" ";
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}
signed main()
{
    fastio;
    cout<<"Input Binary Tree : ";
    cout.flush(); // ensuring that any pending output is flushed to the console before proceeding with the rest of the program.
    // cause by using fastio; it prioritize the input format first than cout stream
    TreeNode *root = input();
    cout<<"Inserted value : ";
    cout.flush();
    int x;cin>>x;
    insert(root,x);
    print_level_order(root);
    return 0;
}