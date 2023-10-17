#include<bits/stdc++.h>
using namespace std;
//print linked list
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
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    // creating link
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // printing manually each by each node
    // to print a node we always have to go through the node

    cout<<head->val<<endl; // printing head
    cout<<head->next->val<<endl; //printing a
    cout<<head->next->next->val<<endl; // printing b
    cout<<head->next->next->next->val<<endl; // printing c
    cout<<head->next->next->next->next->val<<endl; //printing d

    // printing all by a loop 

    // while(head!=NULL)
    // {
    //     cout<<head->val<<endl;    // NOTE : we won't printing by moving head otherwise we will lose the head
    //     head = head->next;
    // }

    // we will a temp variable in which will store head pointer and will print by moving the temp variable
    
    cout<<"Printing by a loop : "<<endl;
    node *temp = head; // by doing this we won't lose our head
    // Time complexity : O(N)
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
    return 0;
}