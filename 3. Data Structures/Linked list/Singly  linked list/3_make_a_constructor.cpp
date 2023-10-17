#include<bits/stdc++.h>
using namespace std;
class node
{
    public: 
        int val;
        node *next;

        node(int val)
        {
            this->val=val;
            this->next = NULL;
        }
};
int main()
{
    node a(10);
    node b(20);
    a.next = &b;
    cout<<"a : "<<a.val<<endl;
    cout<<"b : "<<b.val<<endl;
    cout<<"a : "<<a.next->val<<endl;
    cout<<"b : "<<(*b.next).val<<endl;
    return 0;
}