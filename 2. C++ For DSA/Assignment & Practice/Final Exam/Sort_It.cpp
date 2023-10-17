#include<bits/stdc++.h>
using namespace std;
class student
{
    public: 
        string name;
        int cls;
        char section;
        int id;
        int math;
        int english;
        
        int total_mark()
        {
            return math+english;
        }
        void print()
        {
            cout<<name<<" "<<cls<<" "<<section<<" "<<id<<" "<<math<<" "<<english<<endl;
        }
};
int main()
{
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name;
        cin>>s[i].cls;
        cin>>s[i].section;
        cin>>s[i].id;
        cin>>s[i].math;
        cin>>s[i].english;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].total_mark()<s[j].total_mark())
            {
                swap(s[i],s[j]);
            }
            else if(s[i].total_mark() ==s[j].total_mark())
            {
                if(s[i].id>s[j].id)
                swap(s[i],s[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        s[i].print();
    }
}