#include<bits/stdc++.h>
using namespace std;
// same to same
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
string comparison(node *head,node *head2)
{
    for(node *i = head,*j = head2;i!=NULL;i=i->next,j=j->next)
    {
        if(i->val!=j->val)
        return "NO";
    }
    return "YES";
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
    tail = newnode;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    node *head1 = NULL;
    node *tail1 = NULL;
    int val;
    int size=0,size1=0;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        input(head,tail,val);
        size++;
    }
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        input(head1,tail1,val);
        size1++;
    }
    size==size1?cout<<comparison(head,head1):cout<<"NO";
    return 0;
}