#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
/*
    8
    /\
   2 15
   \  /\
  5 12 18

  input : 2 5 8 12 15 18
  output : 8 2 15 5 12 18
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
TreeNode* convert(int *arr,int n,int low,int high)
{
    if(low>high)
    return NULL;
    int mid = low + (high-low)/2;
    TreeNode *root = new TreeNode(arr[mid]);
    TreeNode *leftRoot = convert(arr,n,low,mid-1);
    TreeNode *rightRoot = convert(arr,n,mid+1,high);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
signed main()
{
    fastio;
    int n;cin>>n;int arr[n];
    for(auto &x:arr)
    cin>>x;
    TreeNode *root = convert(arr,n,0,n-1);
    print_level_order(root);
    return 0;
}