#include<bits/stdc++.h>
using namespace std;
// new array
// module 2.5 data structure
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cin>>arr2[i];
    vector<int> v(arr2,arr2+n);
    for(int i=0;i<n;i++)
    v.push_back(arr[i]);
    for(int i=0;i<2*n;i++)
    cout<<v[i]<<" ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    reverse(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// replacement
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>0)
        v[i]=1;
        else if(v[i]<0)
        v[i]=2;
    }
    for(auto x:v)
    cout<<x<<" ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// counting elements
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j]-1)
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
}

#include<bits/stdc++.h>
using namespace std;
// count letters
int main()
{
    string str;
    cin>>str;
    vector<int> fre(26,0);
    for(int i=0;i<str.size();i++)
    {
        fre[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(fre[i]>0)
        cout<<(char)(i+'a')<<" : "<<fre[i]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// range sum query
int main()
{
    int p,q;
    cin>>p>>q;
    vector<long long int> arr(p+1,0);
    for(int i=1;i<p+1;i++)
    {
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }
    int m,n;
    while(q--)
    {
        cin>>m>>n;
        cout<<arr[n]-arr[m-1]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// binary search
bool binarysearch(vector<int>&arr,int n,int target)
{
    int low=0,high=n-1,mid;
    if(arr[low]==target)
    return true;
    if(arr[high]==target)
    return true;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]==target)
        return true;
        else if(arr[mid]<target)
        low = mid+1;
        else
        high = mid -1;
    }
    return false;
}
int main()
{
    int n,q,temp;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    while(q--)
    {
        cin>>temp;
        if(binarysearch(v,n,temp))
        cout<<"found"<<endl;
        else
        cout<<"not found"<<endl;
    }
    return 0;
}