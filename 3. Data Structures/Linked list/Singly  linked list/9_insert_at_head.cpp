#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node *next;

        node(int val)
        {
            this->val= val;
            this->next = NULL;
        }
};
void insert_at_head(node *&head,int value) // here we using referencing of pointer cause we will update the head node here
{
    // Time complexity : O(1)
    node *newnode = new node(value);
    newnode->next = head;
    head = newnode;
    cout<<"inserted at head.";
}
void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    head->next = a;
    cout<<"enter value to insert at head : ";
    int val;
    cin>>val;
    insert_at_head(head,val);
    print(head);
    return 0;
}