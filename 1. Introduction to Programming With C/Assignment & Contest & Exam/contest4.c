#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//1
int main()
{
    puts("Programming is fun!!");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//2
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a && a>0 && b>0 && c>0)
    puts("Yes");
    else
    puts("No");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//3
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = max - arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//high star pattern
int main()
{
    int n;
    scanf("%d",&n);
    int flag = (n+1)/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==flag)
            {
                printf("#");
            }
            else
            {
                if(j==flag)
                printf("#");
                else
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// search engine
int main()
{
    int t;
    scanf("%d",&t);
    int p = 1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int k;
        scanf("%d",&k);
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                flag = i+1;
                break;
            }
        }
        if(flag>0)
        printf("Case %d: %d\n",p,flag);
        else
        printf("Case %d: Not Found\n",p);
        p++;

    }
}