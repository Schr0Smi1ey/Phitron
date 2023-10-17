#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
/*
         10
        / \
       5  15
      /\  / \
     2 6 12 16
      \
      3

    input : 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
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
TreeNode * input()
{
    TreeNode *root;
    int val;cin>>val;
    if(val==-1)
    root = NULL;
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
bool search(TreeNode *root,int x)
{
    if(root==NULL) // root NULL means we reach to the leaf node and didn't find x
    return false;
    if(root->val==x) 
    return true;    
    if(root->val>x) // root->val > x means we have to search in left subtree
    return search(root->left,x);
    else // <x means we have to search in right subtree
    return search(root->right,x);
}
signed main()
{
    fastio;
    TreeNode *root = input();
    if(search(root,100))
    cout<<"Yes, found"<<endl;
    else
    cout<<"No, Not Found"<<endl;
    return 0;
}