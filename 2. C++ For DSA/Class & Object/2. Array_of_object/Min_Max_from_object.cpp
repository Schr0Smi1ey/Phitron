#include<bits/stdc++.h>
using namespace std;
// we will get the min and max depending of any data of the student such as(roll,marks..)
class student 
{
    public: 
        string name;
        int roll;
        int marks;
};
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

    // get the student who got the maximum marks among all
    student mx;
    mx.marks = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>mx.marks)
        {
            mx = s[i];
        }
    }
    cout<<"Data of student who got the maximum marks among all : ";
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    // get the student who got the minimum marks among all
    student mn;
    mn.marks = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(s[i].marks<mn.marks)
        {
            mn=s[i];
        }
    }
    cout<<"Data of the student who got minimum marks among all : ";
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}