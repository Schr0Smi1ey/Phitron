#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// practice problem 3
int count_before_zero(int *arr,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",count_before_zero(arr,n));
}
int count_before_zero(int *arr,int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        count++;
        if(arr[i]==0)
        break;
    }
    return count;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// practice problem 5
int is_palindrome(char *str);
int main()
{
    char str[11];
    gets(str);
    if(is_palindrome(str)==0)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}
int is_palindrome(char *str)
{
    int flag=0;
    for(int i=0,j=strlen(str)-1;i<strlen(str)+1/2;i++,j--)
    {
        if(str[i]!=str[j])
        flag++;
    }
    return flag;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// problem 2
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//problem 1
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=(n*2)-1;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d",j);
        }
        if(i<n)
        {
            s--;
            k+=2;
        }
        else
        {
            s++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}




// problem 6

pass by value : when we pass a value of a variable to a function and if any change of this value in the function can't have the effect on the value of the variable in the main function then it is called pass by value.

// here is an example of pass by value
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int pass_by_value(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("main function n value : %d\n",n);
    printf("function n value : %d\n",pass_by_value(n));
    // the both value will be difference and main function value won't be change which proofs that it's pass by value
    return 0;
}
int pass_by_value(int n)
{
    n-=-10;
    return n;
}


pass by reference : when we pass a adress of a variable in a function and any change in the value of this adress in the function through a pointer bear a effect of that variable even in the main function then it's called pass by reference.

here is an example of pass by reference
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int pass_by_reference(int *n,int size);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    memset(arr,0,sizeof(arr)); // initializes all array element to zero
    printf("before pass by reference : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    pass_by_reference(arr,n);
    printf("after pass by reference : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",i[arr]); // there will be in the first index value . hence it's proofs that it's pass by reference
    }
    return 0;
}
int pass_by_reference(int *n,int size)
{
    n[0]-=-20;
}


// problem 4

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// has return & parameter
int sum(int,int);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int summation = sum(m,n);
    printf("sum : %d",summation);
}
int sum(int a,int b)
{
    return a+b;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// has return but no parameter
char max();
int main()
{
    char test = max();
    printf("max : %c",test);
}
char max() 
{
    char c1,c2;
    scanf("%c %c",&c1,&c2);
    if (c1 > c2) 
    {
        return c1;
    } 
    else 
    {
        return c2;
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// no return + parameter
void print_name(char *str);
int main()
{
    char str[]="sarafat karim";
    printf("sir, your name please ?\n");
    print_name(str);
}
void print_name(char *str)
{
    puts(str);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// no return + no parameter
void sum_of_array(void);
int main()
{
    sum_of_array();
}
void sum_of_array(void)
{
    int arr[5];
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("sum : %d",sum);
}