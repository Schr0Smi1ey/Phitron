#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
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
            this->prev =  NULL;
        }
};
int size(node *head)
{
    node *temp = head;
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_in_order(node *head)
{
    node *temp = head;
    cout<<"L -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(node *tail)
{
    node *temp = tail;
    cout<<"R -> ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
bool insert(node *&head,node *&tail,int pos,int val)
{
    node *newnode = new node(val);
    if(pos>size(head))
    {
        return false;
    }
    if(head==NULL)
    {
        head=newnode;
        tail = newnode;
        return true;
    }
    if(pos==0)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return true;
    }
    if(pos==size(head))
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        return true;
    }
    node *temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next->prev = newnode;
    return true;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(insert(head,tail,pos,val))
        {
            print_in_order(head);
            print_reverse(tail);
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}