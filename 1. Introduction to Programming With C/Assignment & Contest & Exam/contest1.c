#include <stdio.h>
// problem 1
int main()
{
    printf("I Love Practice");
    return 0;
}

#include<stdio.h>
// problem 2
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a + b;
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
// problem 3
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("I Love Practice\n");
    }
    return 0;
}

#include<stdio.h>
// problem 4
int main()
{
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c",&a,&b,&c,&d);
    printf("%d\n%lld\n%.2f\n%c\n",a,b,c,d);

    return 0;

}

#include<stdio.h>
// problem 5
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%5!=0)
        printf("%d No\n",i);
        else
        printf("%d Yes\n",i);
    }
    return 0;
}

