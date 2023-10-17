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
void reverese(node *&head,node *cur)
{
    if(cur->next==NULL)
    {
        head = cur;
        return;
    }
    reverese(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    node *head=NULL;node *tail=NULL;node *newhead=NULL;node *newtail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        input(head,tail,val);
        input(newhead,newtail,val);
    }
    reverese(newhead,newhead);
    node *temp=head;node *temp2=newhead;
    while(temp!=NULL)
    {
        if(temp->val!=temp2->val)
        {
            cout<<"NO";
            return 0;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    cout<<"YES";
    return 0;
}