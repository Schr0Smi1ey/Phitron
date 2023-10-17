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
            this->next = NULL;
            this->val = val;
        }
};
void input(node *&head,node*&tail,int val)
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
    cout<<endl;
}
// reverse using the recursion
void reverse(node *&head,node *cur)
{
    if(cur->next==NULL)
    {
        head = cur;
        return;
    }
    reverse(head,cur->next); // call the function again and again until cur->next!=NULL
    cur->next->next=cur;
    cur->next = NULL;
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
    cout<<"Before reverse : ";
    print(head);
    cout<<"After reverse : ";
    reverse(head,head);
    print(head);
    return 0;
}