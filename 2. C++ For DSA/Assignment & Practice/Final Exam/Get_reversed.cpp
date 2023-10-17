#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
        string name;
        int cls;
        char section;
        int math;
        int english;

        void print()
        {
            cout<<name<<" "<<cls<<" "<<section<<" "<<math<<" "<<english<<endl;
        }
};
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    student s[n];
    for(int i = 0;i<n;i++)
    {
        cin>>s[i].name;
        cin>>s[i].cls;
        cin>>s[i].section;
        cin>>s[i].math;
        cin>>s[i].english;
        cin.ignore();
    }
    for(int i=n-1;i>=0;i--)
    {
        s[i].print();
    }
    return 0;
}