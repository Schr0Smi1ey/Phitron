#include<bits/stdc++.h>
using namespace std;
class pen 
{
    public:
        string brand;
        string colour;
        int price;
        // we can't use constructor for array of object
        // however we can use function to assign values
};
int main()  
{
    int n;
    cout<<"number of pen : ";
    cin>>n;
    cin.ignore();
    pen p[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,p[i].brand);
        // cin.ignore();
        getline(cin,p[i].colour);
        cin>>p[i].price;
        cin.ignore();
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i].brand<<" "<<p[i].colour<<" "<<p[i].price<<endl;
    }
}