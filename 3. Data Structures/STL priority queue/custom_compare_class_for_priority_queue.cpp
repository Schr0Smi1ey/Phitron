#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
class student
{
    public:
        string name;
        int roll;
        int marks;

        student(string name,int roll,int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};
class cmp
{
    public: 
        bool operator()(student a,student b) // this syntax must have to remembered
        // operator() ---> here () is the function call operator
        {
            if(a.marks<b.marks)  // whenever (a.marks>b.marks) it will swap
            return true; // here return true means there needs to change 
            else if(a.marks>b.marks)
            return false;
            else
            {
                if(a.roll>b.roll)
                return true;
                else
                return false;
            }
        }
};
signed main()
{
    fastio;
    int n;cin>>n;
    priority_queue<student,vector<student>,cmp> pq; // here cmp is a custom comparator class
    while(n--)
    {
        string name;int roll,marks;
        cin>>name>>roll>>marks;
        student stdnt(name,roll,marks);
        pq.push(stdnt);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}