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
int main()
{
    node *head = new node(10); // declaration of dynamic node
    node *a = new node(20);

    head->next = a;

    cout<<"head : "<<head->val<<endl;
    cout<<"a : "<<a->val<<endl;
    cout<<"a : "<<head->next->val<<endl;
    cout<<"a : "<<(*(*head).next).val<<endl; // printing a dynamic node using dereferencing
    return 0;  
}