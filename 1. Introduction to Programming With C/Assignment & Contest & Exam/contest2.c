//contest 2
#include<stdio.h>
// problem 1
int main()
{
    printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\ \nI want to give my 100%% dedication to learn!\tI will succeed one day.");
    return 0;
}

#include<stdio.h>
// problem 2
int main()
{
    // declare two int variable
    long long int a,b;
    // taking input from the user
    scanf("%lld %lld",&a,&b);
    long long int mul = a*b; // multiply them and assigning to new variable mul
    printf("%lld",mul);
    return 0;
}

#include<stdio.h>
// problem 3
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}

#include<stdio.h>
// problem 4
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        if(i%3==0 && i%7==0)
        printf("%d\n",i);
    }
    return 0;
}

#include<stdio.h>
// problem 5
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1000)
    {
        printf("I will buy Punjabi\n");
        n = n - 1000;
        if(n>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}