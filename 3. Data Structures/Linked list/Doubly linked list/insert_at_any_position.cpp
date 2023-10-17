#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node *next;
        node *prev;

        node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void print_in_order(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(node *tail)
{
    node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_at_any_position(node *&head,node *&tail,int pos,int val)
{
    node *newnode = new node(val);
    node *temp = head;
    if(pos==0) // insert at head
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return;
    }
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next;
    }
    if(temp->next==NULL) // to insert at tail
    {
        temp->next=newnode;
        newnode->prev = temp;
        tail = newnode;
        return ;
    }
    // insert other's position
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = temp;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    insert_at_any_position(head,tail,4,100);
    insert_at_any_position(head,tail,0,40);
    insert_at_any_position(head,tail,2,2300);
    print_in_order(head);
    print_reverse(tail);
    return 0;
}