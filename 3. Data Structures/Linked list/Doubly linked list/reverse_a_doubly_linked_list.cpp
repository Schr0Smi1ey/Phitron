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
            this->prev = NULL;
        }
};
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
    newnode->prev = tail;
    tail = newnode;
}
void reverse(node *head,node *tail)
{
    node *i = head;
    node *j = tail;
    while(i!=j && i->next!=j) // (i!=j) for odd length list
                            // (i->next!=j) for even length list
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val); // if the length is even then last two values of i,j remain unswapped as(i->next==j)..so we need do it manually
    // which won't affect for odd length also...
}
int main()
{
    node *head=NULL;
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
    reverse(head,tail);
    print(head);
}