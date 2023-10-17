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
void delete_head(node *&head) // here we have to take point of referencing as we will update head
{      
    // Time complexity : O(1)
    node *deletenode = head;
    head = head->next;
    delete deletenode;
    cout<<"head deleted"<<endl;
}

void print(node *head) // Time complexity : O(N) (N is the size of linked list)
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
    node *b = new node(30); 
    node *c = new node(40); 
    node *d = new node(50); 
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<"before head deleted : ";
    print(head);
    delete_head(head);
    cout<<"after head deleted : ";
    print(head);
    return 0;
}