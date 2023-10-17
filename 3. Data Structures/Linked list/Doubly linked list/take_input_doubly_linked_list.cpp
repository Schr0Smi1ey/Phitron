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
void print_in_order(node *head)
{
    node *temp = head;
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
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
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
    cout<<"size : "<<size(head)<<endl;
    print_in_order(head);
    print_reverse(tail);
    return 0;
}   