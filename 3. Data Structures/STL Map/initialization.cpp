#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
signed main()
{
    fastio;
    map<string,int> mp;

    // to insert value in map ----> Time Complexity : O(logN)
    mp.insert({"sarafat",220216}); // for inserting we have to insert as pair
    mp.insert({"farid",220222});
    mp.insert({"hasib",220227});

    // insert in map as accessing key
    mp["karim"] = 111;
    mp["minhaz"] = 222;
    // to print a map value
    for(auto it=mp.begin();it!=mp.end();it++) // we have to use iterator
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<mp["minhaz"]<<endl;
    // for accessing individually
    cout<<mp["sarafat"]<<endl; // it will print sarafat key value

    // to check weather a key is present in the map or not
    if(mp.count("she"))
    cout<<"Exist"<<endl;
    else
    cout<<"Don't Exist"<<endl;

    // accessing a key which isn't in the map...then it will print it's value 0
    cout<<mp["she"]<<endl;
}