#include<bits/stdc++.h>
using namespace std;
// print singly list in reverse
// we can't print reverse singly linked list without recursion
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
    node * newnode = new node(val);
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
    // here we don't use referencing of pointer so moving head(which is copy of main function head) won't effect in the main function head
    if(head == NULL)
    return ;
    cout<<head->val<<" ";
    print_in_order(head->next);
}

void print_in_reverse(node *head)
{
    if(head==NULL)
    return ;
    print_in_reverse(head->next);
    cout<<head->val<<" ";
}
int main()
{
    node *head = NULL,*tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        input(head,tail,val);
    }
    print_in_order(head);
    cout<<endl;
    print_in_reverse(head);
    return 0;
}