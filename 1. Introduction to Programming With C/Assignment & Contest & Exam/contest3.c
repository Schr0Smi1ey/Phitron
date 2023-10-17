//print it
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("I Love Assignment\n");
    }
    return 0;
}

// can you do it?
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=n;i<=1;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

// Even or Odd
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum_even=0,sum_odd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum_even=sum_even+arr[i];
        else
        sum_odd=sum_odd+arr[i];
    }
    printf("%d %d",sum_even,sum_odd);
    return 0;
}

// update and print
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,x,v;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n ;i++)
    {
        arr[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&x,&v);
    for(int i=0;i<n;i++)
    {
        if(i==x)
        arr[i]=v;
    }
    for(int i=(n-1);i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}

// reverse and even
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=(n-1);i>=0;i--)
    {
        if(i%2==0)
        printf("%d ",arr[i]);
    }

    return 0;
}