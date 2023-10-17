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
    // temp is now at last node
    temp->next = newnode; // linked with the new inserted value
}
void print_linked_list(node *head) // here we don't using the referencing of pointer cause we just have to print the node ...there will be no need to update the pointer(head)
{
    node *temp = head; // take the head to a temp variable so that we don't lost the head
    cout<<"Your linked list : ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}
void insert_at_any_position(node *head,int pos,int value)
{
    node *newnode = new node(value);
    node *temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp = temp->next;
        if(temp==NULL) // error handling
        {
            cout<<"invalid index"<<endl<<endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void insert_at_head(node *&head,int value) // here we using referencing of pointer cause we will update the head node here
{
    node *newnode = new node(value);
    newnode->next = head;
    head = newnode;
    cout<<"inserted at head."<<endl;
}

void delete_from_any_position(node *head,int pos)
{
    node *temp = head;
    for(int i=1;i<pos-1;i++) // come before the node which needs to be deleted
    {
        temp = temp->next;
        if(temp== NULL)
        {
            cout<<endl<<"invalid index"<<endl<<endl;
            return ;
        }
    }
    if(temp->next==NULL)
    {
        cout<<endl<<"invalid index"<<endl<<endl;
        return ;       
    }
    node *deletenode = temp->next; // store the node which needs to be deleted
    temp->next = temp->next->next; // connect before and after node from the node which needs to be deleted
    delete deletenode;
    cout<<"node deleted successfully"<<endl;
}
void delete_head(node *&head)
{
    if(head==NULL)
    {
        cout<<"head isn't available"<<endl<<endl;
        return;
    }
    node *deletenode = head;
    head = head->next;
    delete deletenode;
    cout<<"head deleted"<<endl<<endl;
}
int main()
{
    // case -01 : if head is NULL
    node *head = NULL;

    // case -02 : if head isn't NULL

    // node *head = new node(20);
    // node *a = new node(30);
    // head->next = a;

    while(true)
    {
        cout<<"please choose option"<<endl;
        cout<<"option 1 : take input node(-1 for stop taking input)"<<endl;
        cout<<"option 2 : insert at tail"<<endl;
        cout<<"option 3 : print linked list"<<endl;
        cout<<"option 4 : insert at any position"<<endl;
        cout<<"option 5 : insert at head"<<endl;
        cout<<"option 6 : delete from any position"<<endl;
        cout<<"option 7 : delete head"<<endl;
        cout<<"option 8 : terminate"<<endl;
        cout<<"enter option : ";
        int op;
        cin>>op;
        cout<<endl;
        switch(op)
        {
            case 1 : 
                cout<<"enter linked list value : ";
                while(true)
                {
                    int input_value;
                    cin>>input_value;
                    if(input_value==-1)
                    break;
                    else
                    insert_at_tail(head,input_value);
                }
                break;

            case 2 : 
                cout<<"please enter value to insert at tail : ";
                int value;
                cin>>value;
                insert_at_tail(head,value);
                break;

            case 3 : 
                print_linked_list(head);
                break;

            case 4 : 
                int pos,v;
                cout<<"enter pos to insert : ";
                cin>>pos;
                cout<<endl<<"enter value to insert : ";
                cin>>v;
                if(pos == 1)
                {
                    insert_at_head(head,v);
                }
                else
                insert_at_any_position(head,pos,v);
                break;

            case 5 : 
                int va;
                cout<<"enter value to insert at head : ";
                cin>>va;
                insert_at_head(head,va);
                break;

            case 6 : 
                int pos1;
                cout<<"enter position to be deleted : ";
                cin>>pos1;
                if(pos1==1)
                {
                    delete_head(head);
                }
                else
                delete_from_any_position(head,pos);
                break;

            case 7 : 
                delete_head(head);
                break;

            default : 
                break;
        }
    }
    return 0;
}