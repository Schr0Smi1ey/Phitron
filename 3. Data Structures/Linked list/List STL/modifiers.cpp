#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void print(list<int>&arr)
{
    for(auto x:arr)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
    list<int> mylist = {1,2,3,4,5};
    list<int> assigned;

    // assign to list to another list
    assigned = mylist;
    // assigned.assign(mylist.begin(),mylist.end()); // another method to assign but we will use the first one
    cout<<"assigned : ";
    print(assigned);
    cout<<endl;

    // push_back() = insert at tail at doubly linked list
    // push_front() = insert at head
    // pop_back() = delete tail
    // pop_front() = delete head
    mylist.push_back(100);
    mylist.push_front(200);
    cout<<"after push in front and back : ";
    print(mylist);
    mylist.pop_back();
    cout<<"after pop from back : ";
    print(mylist);
    mylist.pop_front();
    cout<<"after pop from front : ";
    print(mylist);


    // insert(iterator,val) 
    // for iterator we use a funciton (next(starting pointer),index(assuming))
    cout<<"after insert 777 at 3rd position : ";
    mylist.insert(next(mylist.begin(),2),777); // Time complexity : for insert O(1) ...next funtion -O(N)....total = O(N)
    print(mylist);
    // Note : if we insert out of the bound of the list it will be inserted at (pos%list.size())
    cout<<"after insert 888 at 8th position(it will be in (8 % mylist.size())) : ";
    mylist.insert(next(mylist.begin(),8),888);
    print(mylist);
    // inserting multiple value
    mylist.insert(next(mylist.begin(),2),{11,22,33,44});
    cout<<"after insert multiple : ";
    print(mylist);
    // insert another list,arr,vector(just put the starting pointer and ending pointer) at a specific position 
    list<int> temp ={12,34,55};
    mylist.insert(next(mylist.begin(),2),temp.begin(),temp.end());
    cout<<"after insert a list : ";
    print(mylist);


    // erase() = to delete a position from the list
    mylist.erase(next(mylist.begin(),4)); // it will remove the 5th number element
    cout<<"after erase 5th element : ";
    print(mylist);
    // to delete multiple value we have to pass two pointer
    mylist.erase(next(mylist.begin()),next(mylist.begin(),4)); // it will remove the first 4 element ...last pointer hbe je porjonto amra delete korte chai tar porer element er pointer
    cout<<"after delete first 3 element next from the head : ";
    print(mylist);


    // replace() = replace all the value with replace value
    list<int> test={1,1,1,1,1,1,1,};
    replace(test.begin(),test.end(),1,7); // replace all the 1 with 7
    cout<<"after replace test list : ";
    print(test);


    // find() = to find a value in the list....it will return a pointer to this element
    auto it = find(test.begin(),test.end(),4);
    if(it==test.end())
    cout<<"4 at test list : "<<"Not Found"<<endl;
    else
    cout<<"Found"<<endl;
}