#include<stdio.h>
// welcome for you with conditions
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// multiple
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0 || b%a==0)
    printf("Multiples\n");
    else
    printf("No Multiples\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z')
    printf("%c",ch+32);
    else
    printf("%c",ch-32);

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n/=10;
    }
    if(rem%2==0)
    printf("EVEN");
    else
    printf("ODD");

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// even numbers
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1)
    printf("%d",-1);
    else
    {
        for(i=2;i<=n;i=i+2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// fixed passwords
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        printf("Wrong\n");
    }

    return 0;
}

