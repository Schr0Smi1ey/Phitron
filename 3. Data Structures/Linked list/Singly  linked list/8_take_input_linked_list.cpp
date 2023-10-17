#include<bits/stdc++.h>
using namespace std;
// taking input linked list in other word inserting node at tail
// Time complexity : O(N^2)
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
void insert_at_tail(node *&head,int val) // Time comlexity : O(N)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        return ;
    }
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void print(node *head) // time complexity : O(N)
{
    node *temp = head;
    cout<<"your linked list : ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    int val;
     //Time complexity : O(N^2)
    while(true)  //Time complexity : O(N)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_at_tail(head,val);  //Time complexity : O(N)
    }
    print(head);
    return 0;
}


//take input linked list at Time complexity O(N)
#include<bits/stdc++.h>
using namespace std;
// same process take input linked list means insert a value at tail
// But this time we will insert at tail by O(1) by keep tracking of tail
class node
{
    public:
        int val;
        node *next;

        node()
        {
            ;
        }
        node(int val)
        {
            this->val = val;
            this->next = NULL;
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
}
void insert_at_tail(node *&head,node *&tail,int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return ;
    }
    tail->next = newnode;
    tail = newnode;
}
int main()
{
    // node *head = new node(10);
    // node *tail = new node(20);
    node *head = NULL;
    node *tail = NULL;
    int val;
    // Time complexity : O(N)
    while(true) // Time complexity : O(N)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_at_tail(head,tail,val); // Time complexity : O(1)
    }
    print(head);
    return 0;
}