#include<bits/stdc++.h>
using namespace std;
// max min
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
void min_max(node *head)
{

    node *minima = new node(INT_MAX);
    node *maxima = new node(INT_MIN);
    for(node *i = head;i!=NULL;i=i->next)
    {
        minima->val = min(minima->val,i->val);
        maxima->val = max(maxima->val,i->val);
    }
    cout<<maxima->val<<" "<<minima->val;
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
    min_max(head);
    return 0;
}