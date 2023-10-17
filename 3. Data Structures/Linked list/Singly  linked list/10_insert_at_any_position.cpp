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
void insert_at_any_position(node *head,int pos,int value) //Time complexity : O(N)
{
    node *temp = head;
    node *newnode = new node(value);
    for(int i=1;i<pos-1;i++) // 
    {
        temp = temp->next;
    }
    // do the whole process in paper to have a better understanding

    // now temp is at the node right before (pos)
    newnode->next = temp->next; // connect with the next value(current value which is at position(pos))
    temp->next = newnode; // connect (pos-1) node with the newnode
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    head->next = a;
    a->next = b;
    int pos=2 ; // let's assume we want to insert a value at 2 position (assuming 1-based indexing)
    int value = 100; // inserted value 
    insert_at_any_position(head,pos,value);
    node *temp = head;
    cout<<"linked list after insertion : ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return 0;
}