#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// hare and tortoise algorithm
// fast and slow algorithm
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
bool detect_cycle(node *head) // Time complexity : O(N)
{
    node *slow = head;
    node *fast = head;
    while(fast!=NULL && fast->next!=NULL) // here we first have to check does fast NULL or not...otherwise we will got error
    {
        slow = slow->next ; // move slow by 1 node
        fast = fast->next->next; // move fast by 2 node
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    // making a cycle
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a; // here the cycle got created (Run the code again removing this line..output : No cycle)

    if(detect_cycle(head))
    {
        cout<<"Cycle detected.";
    }
    else
    {
        cout<<"No cycle.";
    }
    return 0;

}