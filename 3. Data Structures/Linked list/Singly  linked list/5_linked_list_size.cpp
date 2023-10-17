#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node *next;

        node(int val)
        {
            this->val= val;
            this->next = NULL;
        }
};
int size(node *head) // Time complexity : O(N)
{
    node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    node *head = new node(20);
    node *a = new node(30);
    node *b = new node(40);
    node *c = new node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    cout<<"size : "<<size(head);
    return 0;
}