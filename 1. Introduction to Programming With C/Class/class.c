#include<stdio.h>
int main()
{
    printf("%%\t\\"); //to print a % or \ we have to write it twice
    return 0;
}

// insertion in array
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    printf("enter array element : ");
    int arr[n+1]; //(n+1)cause we will insert an element in the array
    for(int i=0;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    //scanning the position where to insert and the value where to insert
    int pos,value;
    printf(" enter position and value : ");
    scanf("%d %d",&pos,&value);
    for(int i=n;i>=pos+1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//deletion in array
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //now will scanning the position which to delete
    int pos;
    printf("enter position : ");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

//reverse an array
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("enter array length : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    // for(int i=0,j=n-1;i<n;i++,j--)
    // {
    //     if(i>=j)
    //     break;
    //     temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    // }
    int i=0,j=n-1;
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
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
#include<limits.h> // using of limit.h library
int main()
{
    int n,max=INT_MIN,min=INT_MAX;
    

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// printing pattern
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// printing pattern
int main()
{
    int n;
    scanf("%d",&n);
    int k=n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// printing pattern
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// printing pattern
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,k=(2*n)-1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// printing pattern
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=0;i<(2*n)-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<n-1)
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
    // int s1=1,k1=(2*n)-3;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=1;j<=s1;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=1;j<=k1;j++)
    //     {
    //         printf("*");
    //     }
    //     s1++;
    //     k1-=2;
    //     printf("\n");
    // }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// using of ceil function 
int main()
{
    // ceil function return the next int value of a floating value
    // ceil(3.004) = 4
    float f;
    scanf("%f",&f);
    printf("%d",(int)ceil(f));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// using of floor function
int main()
{
    // floor function returns the previous int value of a floating value
    // floor(3.004) = 3
    float f;
    scanf("%f",&f);
    printf("%d",(int)floor(f));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// using of round function
int main()
{
    // round function ceil the float value if the value (>=x.5)
    // round function floor the float value if the value (<x.5)
    // round(4.999)=4
    // round(4.500001) = 5
    float f;
    scanf("%f",&f);
    printf("%d",(int)round(f));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// using of sqrt function
int main()
{
    // sqrt function takes float/int arguments and returns float value the square root of the value
    // sqrt(25) = 5
    double f;
    scanf("%lf",&f);
    printf("%lf",sqrt(f));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// using of pow function
int main()
{
    // pow function takes two arguments of float type and returns a float type value
    // so sometimes it may produce error if we pass arguments of int type
    // to avoid this error we will multiply the arguments with (1.0)
    double f;
    int a;
    scanf("%lf %d",&f,&a);
    printf("double value : %lf\n",pow(f,2)); // f^2
    int ans = pow(a*1.0,2.0);
    printf("int value : %d\n",ans); // a^2 
    int ans2 = pow(2,7);
    printf("int another : %d\n",ans2);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// using of abs function
int main()
{
    // it's take an integer arguments returns the absoulute value of this value
    // abs(-1) = 1
    // this abs doesn't work for long long interger so be careful
    // when we need an absoulute of a long long int we have to do it manually
    // if a>1 return a else return (-1)*a
    long long int a;
    scanf("%lld",&a);
    int b;
    scanf("%d",&b);
    printf("%lld\n",abs(a));
    printf("%d\n",abs(b));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// concept of pointer
int main()
{
    int x;
    scanf("%d",&x);
    int *p = &x; // here we store the adress of x in p
    // now if we print q it will the adress of x
    // but if we print *p it will print the value of the adress which is stored in p and it's called dereferencing
    // simply dereferencing means manipulation of value of a variable through it's adress
    // so formally we can say that (*p == x)
    // so if we change the value of *p it will have impact on x
    printf("%p\n",&x); // to print adress we use (%p)
    printf("*p or x : %d\n",*p);
    *p = 500; // this change will have impact on the value of x
    printf("x : %d\n",x);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x=10;
    int *p=&x;
    int *p2=p;
    *p2 = 40;
    printf("%d %d %d",x,*p,*p2);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x = 5.26;
    double *ptr = &x; // the data type of pointer variable will be the data type of variable which adress it will contain
    *ptr = 10.26 ; // dereferencing pointer variable
    printf("x er value : %.2lf\n",x);
    printf("*ptr er value : %.2lf\n",*ptr);
    printf("ptr er value : %d\n",ptr);
    printf("ptr er adress : %d",&ptr);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// call by referencing
void fun(int *p)
{
    *p = 220216;
}
int main()
{
    int x;
    fun(&x);
    printf("x er value : %d",x);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// array is a pointer
int main()
{
    int arr[]={1,2,3,4,5};
    printf("0th index er adress : %p\n",&arr[0]);
    printf("array index er adress : %p\n",arr);
    // two output will be same hence we can say that array is a pointer itself which points at it's 0th index
    printf("0th index er value : %d\n",arr[0]);
    printf("array pointing er value : %d\n",*arr);
    // both value will be the same 


    // different different syntax to printing array value
    printf("printing 1th index value : %d\n",*(arr+1));
    printf("printing 1th index value : %d\n",*(1+arr));
    printf("printing 1th index value : %d\n",arr[1]);
    printf("printing 1th index value : %d\n",*arr+1);
    printf("printing 1th index value : %d\n",1[arr]);
    printf("printing 1th index value : %d\n",1+*arr);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// passing array to function
void fun(int arr[],int n) // this will pointing at 0th index of the array
// another syntax for this : void fun(int *arr) // this will also do the same . will pointing at the first index of the array
// to perform any operation in the function we also have to pass the size of the array from the main function 
{
    int size = sizeof(arr)/sizeof(int);
    printf("size : %d\n",size); // this will print 1 only for the first index
    // from first index we can traverse the other's values of pointer using the pointer arirhmatic as we passing a pointer to the fun of the first index

    // printing the arr using pointer arithmatic
    for(int i=0;i<n;i++)
    {
        printf("%d ",*arr+i); // *arr+i = here is the pointer arithmatic 
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    printf("size : %d\n",size); // this will print 6
    fun(arr,size);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// passing a string to a function
void fun(char str[])
// another syntax : void fun(char *str); // because like array string is also a pointer 
{
    printf("strlen : %d\n",strlen(str));
}
int main()
{
    char str[]="sarafat karim";
    printf("str length : %d\n",strlen(str));
    fun(str);
    // the length from the main function and from the fun function will be the same. so we don't have to pass the string length to the function

}


// note : pass by value don't work for array and string as they are pointer itself. so it will always be call by reference
// means we can bring change in array and string in user user defined function


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// call stack
// to understand the stack(incase if you forgot) re-watch the class
void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("hello start\n");
    world();
    printf("hello end\n");
}
int main()
{
    printf("main start\n");
    hello();
    printf("main end\n");
    return 0 ;
}


// topic : recursion
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// printf 1-n using recursion in descending order

// recursion function
void print(int i);
int main()
{
    print(10);
}
void print(int i)
{
    if(i==0) // base case
    return ; // to out from a loop we use break.... similary to exit from a loop we will use return statement.
    printf("%d ",i);
    i--;
    print(i);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// printf 1-n using recursion in ascending order
void print(int i);
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
}
void print(int i)
{
    if(i==1) // base case
    printf("%d ",i); // to out from a loop we use break.... similary to exit from a loop we will use return statement.
    else
    {
        print(i-1); // draw the call stack then think properly...
        printf("%d ",i);
    }
}

// another method is to print in ascending order
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// function
void fun(int high,int low);
int main()
{
    int n;
    scanf("%d",&n);
    fun(n,1);
}
void fun(int high,int low)
{
    if(low==high)
    {
        printf("%d ",low);
        return ;
    }
    printf("%d ",low);
    fun(high,low+1);   
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// scanning an array recursively
void scan(int *arr,int current,int n);
// printing an array recursively
void print(int *arr,int i,int n);
int main()
{
    int arr[5];
    scan(arr,0,5);
    print(arr,0,5);
    return 0;
}
void scan(int *arr,int i,int n)
{
    if(i==n)
    return ;
    scanf("%d",&arr[i]);
    scan(arr,i+1,n);
}
void print(int *arr,int i,int n)
{
    if(i==n)
    return ;
    printf("%d ",arr[i]);
    print(arr,i+1,n);
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// count the string length using recursion
int length(char *str,int i);
int main()
{
    char str[100];
    gets(str);
    printf("length : %d",length(str,0));
    return 0;
}
int length(char *str,int i)
{
    if(str[i]=='\0')
    return 0;
    else
    {
        int l = length(str,i+1);
        return l+1;
    }
    // return 1 + length(str,i+1); // this is also valid
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    // printing a exact row
    int exactrow;
    scanf("%d",&exactrow);
    for(int i=0;i<column;i++)
    {
        printf("%d ",arr[exactrow][i]);
    }
    // print a exact column
    int exactcolumn;
    scanf("%d",&exactcolumn);
    for(int i=0;i<row;i++)
    {
        printf("%d ",arr[i][exactcolumn]);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// check weather a matrix zero matrix or not
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int count = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
            if(arr[i][j]==0)
            count ++;
        }
    }
    if(count == (row*column))
    printf("it's a zero/null matrix.\n");
    else
    printf("it's not a zero/null matrix.\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// check weather a matrix diagonal or not 
// a matrix is diagonal if every element is zero except the primary diagonal
// primary diagonal also can be zero..it it doesn't matter
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int flag = 1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    if(row!=column)
    printf("it's can't be.");
    else
    {        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i==j)
                continue;
                else
                {
                    if(arr[i][j]!=0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag)
        printf("it's a diagonal matrix.\n");
        else
        printf("no");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// check weather a matrix secondary diagonal or not 
// a matrix is diagonal if every element is zero except the secodary diagonal
// secondary diagonal also can be zero..it it doesn't matter
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int flag = 1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    if(row!=column)
    printf("it's can't be.");
    else
    {        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i+j==row-1) // here the condition is mostly important . this is for secodary diagonal.
                continue;
                else
                {
                    if(arr[i][j]!=0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag)
        printf("it's a secondary diagonal matrix.\n");
        else
        printf("no");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// check weather a matrix scalar matrix or not 
// a matrix is scalar if every element is zero except the primary diagonal and they are equal
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int flag = 1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    if(row!=column)
    printf("it's can't be.");
    else
    {        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i==j) // here the condition is mostly important 
                {
                    if(arr[i][j]!=arr[0][0])
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    if(arr[i][j]!=0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag)
        printf("it's a secondary diagonal matrix.\n");
        else
        printf("no");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// check weather a matrix unit matrix or not 
// a matrix is unit if every element is zero except the primary diagonal and they are equal to 1
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int flag = 1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    if(row!=column)
    printf("it's can't be.");
    else
    {        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i==j) // here the condition is mostly important 
                {
                    if(arr[i][j]!=1)
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    if(arr[i][j]!=0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag)
        printf("it's a secondary diagonal matrix.\n");
        else
        printf("no");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// printing a mirror array
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--) // to print the mirror we just have change the loop ..
        // will start the from the loop from the end to first
        {
            printf("%d ",arr[i][j]);
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
// sum of a matrix
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n],d[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            d[i][j]=a[i][j] + b[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",d[i][j]);
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
// print the digit of number from left to right using recursion
void printdigit(int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0) // here 0 is a corner case ...corner case is which have to handle separately from the main logic
        printf("0\n");
        printdigit(n);
        if(n!=0)
        printf("\n");
    }
    return 0;
}
void printdigit(int n)
{
    if(n==0)
    return ;
    else
    {
        printdigit(n/10);
        printf("%d ",n%10);
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// count vowel in a string using recursion
int countvowel(char *str,int i,char *vowel);
int main()
{
    char str[201];
    char vowel[]="aeiouAEIOU";
    gets(str);
    int vowels = countvowel(str,0,vowel);
    printf("%d",vowels);
    return 0;
}
int countvowel(char *str,int i,char *vowel)
{
    if(str[i]=='\0')
    return 0;
    else
    {
        if(strchr(vowel,str[i])!=NULL)
        return 1 + countvowel(str,i+1,vowel);
        else
        return 0 + countvowel(str,i+1,vowel);
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// find factorial of a number using recursin
long long int factorial(int n);
int main()
{
    int n;
    scanf("%d",&n);
    long long int value = factorial(n);
    printf("%lld",value);
    return 0;
}
long long int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// find maximum value from an array using recursion
int maxvalue(int *arr,int n,int i);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = maxvalue(arr,n,0);
    printf("%d",max);
    return 0;
}
int maxvalue(int *arr,int n,int i)
{
    if(i==n)
    return INT_MIN; // for finding the minimum value here will be INT_MAX
    int mx = maxvalue(arr,n,i+1);
    if(arr[i]>mx)
    return arr[i];
    else
    return mx;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// check weather a string palindrome or not
int main()
{
    char str[1001];
    gets(str);
    int i=0,j = strlen(str)-1;
    int flag = 0;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag++;
            break;
        }
        i++;
        j--;
    }
    if(flag)
    printf("NO\n");
    else
    printf("YES");
}