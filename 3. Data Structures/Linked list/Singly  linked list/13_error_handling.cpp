// 1

void insert_at_tail(node *&head,int v)
{
    node *newnode = new node(v);

    // possible error : head may be NULL in the start
    // handling
    if(head==NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

// 2

void insert_at_any_position(node *head,int pos,int value)
{
    node *newnode = new node(value);
    node *temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp = temp->next;
        // error handling
        // possible error : we may access a node to insert which is out of the list
        // handling code
        if(temp==NULL) 
        {
            cout<<"invalid index"<<endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// 3 

void delete_from_any_position(node *head,int pos)
{
    node *temp = head;
    for(int i=1;i<pos-1;i++) 
    {
        temp = temp->next;
        // error handling
        // possible error : we may access a node to delete which isn't present in the list..
        // handling code
        if(temp== NULL)
        {
            cout<<endl<<"invalid index"<<endl<<endl;
            return ;
        }
    }
    // another possible error : 
    // if (temp->next is already NULL) then we can't access it's next to linked with the head
    // it occurs only when head is left in the node and we want to delete it next
    
    // handling code
    if(temp->next==NULL)
    {
        cout<<endl<<"invalid index"<<endl<<endl;
        return ;       
    }
    node *deletenode = temp->next; 
    temp->next = temp->next->next;
    delete deletenode;
    cout<<"node deleted successfully"<<endl;
}