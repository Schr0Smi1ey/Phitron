#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
class student
{
    public:
        string name;
        int roll,marks;

        void set_value(string name,int roll,int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};
class cmp
{
    public:
        bool operator()(student a,student b)
        {
            if(a.marks<b.marks)
            {
                return true;
            }
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
    priority_queue<student,vector<student>,cmp> pq;
    for(int i=0;i<n;i++)
    {
        string str;
        int roll,marks;
        student std;
        cin>>str>>roll>>marks;
        std.set_value(str,roll,marks);
        pq.push(std);
    }
    int q;cin>>q;
    while(q--)
    {
        int a;cin>>a;
        if(a==0)
        {
            string str;
            int roll,marks;
            student std;
            cin>>str>>roll>>marks;
            std.set_value(str,roll,marks);
            pq.push(std);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(a==1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
        else if(a==2)
        {
            if(pq.empty())
            
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else            
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
    }
    return 0;
}