#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// missing number
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,a,b,c;
        scanf("%d %d %d %d",&s,&a,&b,&c);
        printf("%d\n",s-(a+b+c));
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// unit matrix
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    int flag = 0;
    int flag2 = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            {
            if(arr[i][j]!=1)
            flag++;
            }
            else
            {
                if(arr[i][j]!=0)
                flag2++;
            }
        }
    }
    if(flag==0 && flag2==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// matrix again
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[m-1][i]);
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr[i][n-1]);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// count it
int main()
{
    char str[1001];
    gets(str);
    int capital = 0,small = 0,spaces=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        small++;
        else if(str[i]>='A' && str[i]<='Z')
        capital++;
        else
        spaces++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",capital,small,spaces);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// wow pattern's again
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    if(n==1)
    printf("^");
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int i=0;i<space;i++)
            {
                printf(" ");
            }
            for(int j=0;j<((2*i)+1);j++)
            {
                if(i%2==0)
                printf("^");
                else
                printf("*");
            }
            printf("\n");
            space--;
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// who wins
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    int tiger = 0,pathan = 0;
    while(n--)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        tiger++;
        else if(b>a)
        pathan++;
    }
    if(tiger>pathan)
    printf("Tiger");
    else if(pathan>tiger)
    printf("Pathan");
    else
    printf("Draw");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// middle man
int cmp(const void *a,const void *b);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),cmp);
    if(n%2==0)
    printf("%d %d",arr[(n/2)-1],arr[n/2]);
    else
    printf("%d",arr[((n+1)/2)-1]);
    return 0;
}
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}