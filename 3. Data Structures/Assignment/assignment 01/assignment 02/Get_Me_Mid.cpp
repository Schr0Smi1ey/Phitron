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
void sort(node *head)
{
    for(node *i = head;i->next!=NULL;i=i->next)
    {
        for(node *j = i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            swap(i->val,j->val);
        }
    }
}
void print_mid(node *head,int size)
{
    node *temp = head;int n = size/2;
    if(size&1)
    {
        while(n--)
        temp=temp->next;
        cout<<temp->val;
    }
    else
    {
        n--;
        while(n--)
        temp = temp->next;
        cout<<temp->val<<" "<<temp->next->val;
    }
}
void input(node *&head,node *&tail,int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return ;
    }
    tail->next = newnode;
    tail = newnode;
}
int main()
{
    node *head = NULL;
    node *tail=NULL;  
    int size = 0;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        input(head,tail,val);
        size++;
    }
    sort(head);
    print_mid(head,size);
    return 0;
}