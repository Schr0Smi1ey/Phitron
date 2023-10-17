#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// finding min and max using (max) and (min) function
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int minima,maxima;
    minima = min(a,min(b,c));
    maxima = max(a,max(b,c));
    cout<<minima<<" "<<maxima;
    return 0;
}