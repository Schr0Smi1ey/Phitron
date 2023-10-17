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
            this->next = NULL;
            this->prev = NULL;
            this->val = val;
        }
};
void input(node *&head,node *&tail,int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
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
    cout<<endl;
}
void sort(node *head)
{
    for(auto i = head;i!=NULL;i=i->next)
    {
        for(auto j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val) // to sort in descending order (i->val<j->val)
            swap(i->val,j->val);
        }
    }
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
    cout<<"Before sort : ";
    print(head);
    cout<<"After sort : ";
    sort(head);
    print(head);
    return 0;
}