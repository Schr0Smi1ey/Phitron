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
void print_head_tail(node *head,node *tail)
{
    cout<<head->val<<" "<<tail->val<<endl;
}
void insert_at_tail(node *&head,node*&tail,int val,int pos)
{
    node *newnode = new node(val);
    if((pos==0 || pos ==1) && head==NULL)
    {
        head = newnode;
        tail = newnode;
        print_head_tail(head,tail);
        return ;
    }
    if(pos==0)
    {
        newnode->next = head;
        head = newnode;
        print_head_tail(head,tail);
        return ;
    }
    tail->next = newnode;
    tail = newnode;
    print_head_tail(head,tail);
    return;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        insert_at_tail(head,tail,v,x);
    }
    return 0;
}