#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node *next;

        node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void input(node *&head,node *&tail,int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return ;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_in_order(node *head)
{
    if(head==NULL)
    return;
    cout<<head->val<<" ";
    print_in_order(head->next);
}
void print_reverse(node *head)
{
    if(head==NULL)
    return;
    print_reverse(head->next);
    cout<<head->val<<" ";
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        input(head,tail,val);
    }
    print_reverse(head);
    cout<<endl;
    print_in_order(head);
    return 0;
}