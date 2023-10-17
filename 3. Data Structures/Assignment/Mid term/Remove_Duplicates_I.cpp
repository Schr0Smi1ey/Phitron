#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
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
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
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
void sort(node *head)
{
    for(auto i=head;i!=NULL;i=i->next)
    {
        for(auto j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        input(head,tail,val);
    }
    sort(head);
    for(auto i=head;i!=NULL;i=i->next)
    {
        while(i->next!=NULL && i->val==i->next->val)
        {
            node *deletenode = i->next;
            i->next = i->next->next;
            delete deletenode;
        }
    }
    print(head);
}