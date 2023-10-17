#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// count 1
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("%d %d",even,odd);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// count 2
int main()
{
    char str[1001];
    gets(str);
    char *vowel="aeiou";
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(strchr(vowel,str[i])) // strchr function to search a char in a string
        // here we make a string with vowel and will search str[i] in the vowel string to check weather it vowel or not
        // if it is will increment count.
        count++;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//workers
int main()
{
    int m,n,d;
    scanf("%d %d %d",&m,&n,&d);
    printf("%d",((m*d)/n));
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//small and capital
int main()
{
    char str[1001];
    gets(str);
    int small=0,capital=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        small++;
        else
        capital++;
    }
    printf("%d %d",capital,small);
    return 0;  
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// do the same
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// find it
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],x;
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        count++;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// count - 3
int main()
{
    char str[1001];
    gets(str);
    int arr[26]={0};
    for(int i=0;i<strlen(str);i++)
    {
        arr[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+'a',arr[i]);
    }
    return 0;
}