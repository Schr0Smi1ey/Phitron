#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
class node
{
    public:
        int val;
        node *next;
        node *prev;

        node(int val)
        {
            this->next = NULL;
            this->prev = NULL;
            this->val = val;
        }
};
void input(node *&head,node *&tail,int val)
{
    node *newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return ;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int size(node *head)
{
    int count = 0;
    node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void delete_node(node *&head,node *&tail,int pos)
{
    if(pos>size(head)) // for 0-based indexing (pos>=size(head))
    {
        cout<<"invalid"<<endl;
        return;
    }
    if(pos==1) // delete head (1-based indexing)
    {
        node *deletenode = head;
        head = head->next;
        if(head==NULL) // in case there is only one node in the list...
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
        delete deletenode;
        return;
    }
    if(pos==size(head)) // delete tail
    {
        node *deletenode = tail;
        tail = tail->prev;
        if(tail==NULL) // in case there is only one node in the list ....(otherwise will got error when(tail->next=NULL))
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
        delete deletenode;
        return;
    } 

    // delete at any position
    node *temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp = temp->next;
    }
    node *deletenode = temp->next;
    temp->next=temp->next->next;
    temp->next->prev = temp;
    delete deletenode;
}
void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        input(head,tail,val);
    }
    cout<<size(head)<<endl;
    print(head);
    int pos;
    cout<<"enter position : "<<endl;
    cin>>pos;
    delete_node(head,tail,pos);
    print(head);
    return 0;
}   