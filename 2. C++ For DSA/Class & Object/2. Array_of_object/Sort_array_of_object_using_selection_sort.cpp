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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].marks<s[j].marks)
            swap(s[i],s[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    // sorting the array of in ascending order of marks
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].marks>s[j].marks)
            swap(s[i],s[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
    return 0;
}