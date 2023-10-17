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
bool check_palindrome(node *head,node *tail)
{
    node *i = head;
    node *j = tail;
    while(i!=j && i->next!=j)
    {
        if(i->val!=j->val)
        return false;
        i=i->next;
        j=j->prev;
    }
    if(i->val==j->val)
    return true;
    else 
    return false;
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
    if(check_palindrome(head,tail))
    cout<<"List is palindrome.";
    else
    cout<<"Not palindrome.";
    return 0;
}