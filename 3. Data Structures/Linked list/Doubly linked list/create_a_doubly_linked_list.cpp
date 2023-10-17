#include<bits/stdc++.h>
using namespace std;
// node class for a doubly linked list
class node
{
    public:
        int val;
        node *next;
        node *prev;

        node(int val)
        {
            this->val=val;
            this->next = NULL;
            this->prev = NULL; // pointer to make connection with the previous node
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
void print_reverse(node *tail) // as now we can move forward and backward through pointer we don't need recursion to print a doubly linked list

{
    node *temp = tail;
    while(tail!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev; // here we will start traverse the linked list from the tail and will traverse in backward
    }
    cout<<endl;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node * tail = b;
    head->next= a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_in_order(head);
    print_reverse(tail);
    return 0;
}