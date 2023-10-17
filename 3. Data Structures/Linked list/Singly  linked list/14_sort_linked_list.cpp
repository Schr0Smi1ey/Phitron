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
void sort(node *head) // as like selection sort
// Time complexity : O(N^2)
{
    for(node* i=head;i->next!=NULL;i=i->next) // i will be a node type pointer (i->next!=NULL means i<n-1)
    // i->next = i++
    {
        for(node *j = i->next;j!=NULL;j=j->next) 
        // j = i->next (j = i+1)
        // j!=NULL means (j<n)
        {
            if(i->val>j->val)
            swap(i->val,j->val);
        }
    }
}
void input(node *&head,node*&tail,int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
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
    print(head);
    return 0;
}