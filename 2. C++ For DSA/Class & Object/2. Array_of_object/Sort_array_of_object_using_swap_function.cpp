#include<bits/stdc++.h>
using namespace std;
// we will sort the array of object depending of any data of the student such as(roll,marks..)
class student 
{
    public: 
        string name;
        int roll;
        int marks;
};
bool ascending(student a,student b);
bool descending(student a,student b);
int main()
{
    int n;
    cout<<"Number of students : ";
    cin>>n;
    cin.ignore();
    student s[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i].name);
        cin>>s[i].roll;
        cin>>s[i].marks;
        cin.ignore();
    }  
    
    // sorting the array of in descending order of marks

    sort(s,s+n,ascending); // this syntax is for the object where we have to add the bool function
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    // sorting the array of in ascending order of marks
    sort(s,s+n,descending);
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    return 0;
}
bool ascending(student a,student b)
{
    if(a.marks<b.marks) // here we are sorting in ascending order depending on their marks
    return true; // when comparing two object marks if the first one is already less than the 
    // second one then it will return true means don't need to perform any action..already in position
    else
    return false; // but if not it will return false means need to take action means swap
}
bool descending(student a,student b)
{
    if(a.marks>b.marks)
    return true;
    else
    return false;
}