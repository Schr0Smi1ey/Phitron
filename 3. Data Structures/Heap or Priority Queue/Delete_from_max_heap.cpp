#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
/*
    Time Complexity : O(logN)
*/
void push(vector<int> &v,int x)
{
    v.push_back(x);
    int curr = v.size()-1;
    while(curr!=0)
    {
        int parent_indx = (curr-1)/2;
        if(v[parent_indx]<v[curr])
        swap(v[parent_indx],v[curr]);
        else
        break;
        curr = parent_indx;
    }
}
void pop(vector<int> &v)
{
    // when delete we have to delete the first index but we don't delete the first index directly as it will break our complete binary tree.
    // so to maintain the complete binary tree we will delete the last index(will swap with the first index and then will pop it)
    swap(v[0],v.back());
    v.pop_back();
    
    // now next step is to maintain the heap..means our first value should the largest value among all...So from top to bottom we will check every child and
    // will continue swapping whenever we get a larger value than our current root
    
    // here can be 4 cases : 
    // 1. exist left_child and right_child ---> in this case we will check if our root value is less than any of them...if then we will swap with the largest one from them and then will update curr index to the swap one..
    // 2. exist only left_child -
    // 3. exist only right_child
    // exist No child

    int curr_index = 0;
    while(true)
    {
        int left_index = (curr_index*2)+1;
        int right_index = (curr_index*2)+2;

        //case : 1
        if(left_index<=v.size()-1 && right_index<=v.size()-1) // check if left and right child exist or not
        {
            if(v[left_index]>=v[right_index] && v[curr_index]<v[left_index])
            {
                swap(v[left_index],v[curr_index]);
                curr_index = left_index; // updating the current_index
            }
            else if(v[right_index]>=v[left_index] && v[curr_index]<v[right_index])
            {
                swap(v[right_index],v[curr_index]);
                curr_index = right_index;
            }
            else
            break;
        }
        else if(left_index<=v.size()-1) // check if left_child exist or not
        {
            if(v[curr_index]<v[left_index])
            {
                swap(v[left_index],v[curr_index]);
                curr_index = left_index;
            }
            else
            break;
        }
        else if(right_index<=v.size()-1) // check if right_child exist or not
        {
            if(v[curr_index]<v[right_index])
            {
                swap(v[curr_index],v[right_index]);
                curr_index = right_index;
            }
            else
            break;
        }
        else // means no child exist and in this we will break
        break;
    }
}
void print(vector<int> v)
{
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
}
signed main()
{
    fastio;
    int n;cin>>n;
    vector<int> v;
    while(n--)
    {
        int x;cin>>x;
        push(v,x);
    }
    print(v);
    pop(v);
    print(v);
    pop(v);
    print(v);
    pop(v);
    print(v);
    pop(v);
    print(v);
    return 0;
}