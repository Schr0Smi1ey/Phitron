#include<bits/stdc++.h>
using namespace std;
// Sum of Vector
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8};
    int sum = 0 ;
    while(!v.empty())
    {
        sum+=v.back();
        v.pop_back();
    }
    cout<<sum;
}