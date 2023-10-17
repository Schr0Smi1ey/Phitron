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
void delete_from_any_position(node *head,int pos) //Time complexity : O(N)
{
    node *temp = head;
    for(int i=1;i<pos-1;i++) // come before the node which needs to be deleted
    {
        temp = temp->next;
    }
    node *deletenode = temp->next; // store the node which needs to be deleted
    temp->next = temp->next->next; // connect before and after node from the node which needs to be deleted
    delete deletenode;
    cout<<"node deleted successfully"<<endl;
}
void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main()
{
    node *head = new node(10);
    node *a = new node(20); 
    node *b = new node(30); 
    node *c = new node(40); 
    node *d = new node(50); 
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<"before deletion : ";
    print(head);
    cout<<endl;;
    int pos;
    cout<<"enter pos to delete : ";
    cin>>pos;
    delete_from_any_position(head,pos);
    cout<<"after deletion : ";
    print(head);
    return 0;
}