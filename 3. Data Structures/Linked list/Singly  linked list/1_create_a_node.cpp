#include<bits/stdc++.h>
using namespace std;
// Time complexity : O(1)
class node
{
    public:
        int val;
        node *next;
};
int main()
{
    node a,b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL;
    cout<<"a : "<<a.val<<endl;
    cout<<"b : "<<b.val<<endl;
    cout<<"b : "<<a.next->val<<endl;
    cout<<"b : "<<(*a.next).val<<endl;
    return 0;
}