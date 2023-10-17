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
void insert_at_tail(node *&head,int v) // here we using (*&) referencing of pointer cause we need to update the pointer(head) in case it is NULL
{
    // Time complexity : O(N)
    node *newnode = new node(v);
    if(head==NULL) // if head is NULL
    {
        head = newnode; // assign the new node to head means this new node is our head
        return; // we inserted the value(in the case of head is NULL) so return from the function
    }

    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    // temp akhon last node
    temp->next = newnode; // linked with the new inserted value
}
void print(node *head)
{
    node *temp = head;
    cout<<"your linked list : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    // case -01 : if head is NULL
    // node *head = NULL;

    // case -02 : if head isn't NULL
    node *head = new node(10);
    cout<<"enter value to insert : ";
    int n;
    cin>>n;
    insert_at_tail(head,n);
    print(head);
    return 0;
}


// insert at tail at O(1) time complexity
// Method : here we will keep a track on the tail
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
void insert_at_tail(node *&head,node *&tail,int val) // Time complexity : O(1)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode; // updating the tail again to keep the track
}
int main()
{
    // if head is NULL
    node *head = new node(100);
    node *tail = head;

    // If head isn't NULL
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *tail = new node(40);


    cout<<"Tail before insert : "<<tail->val<<endl;
    insert_at_tail(head,tail,100);
    cout<<"Tail after insert : "<<tail->val<<endl;
    return 0;
}