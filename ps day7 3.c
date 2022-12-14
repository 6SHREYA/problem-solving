#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int n,i,flag=0;
    printf("enter the string\n");
    scanf("%s",&str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
       if(str[i]!=str[n-i-1])
       {
         flag=1;
         break;
       }
    }
    if(flag==1)
       printf("not palindrome");
    else
        printf(" palindrome");
}
int palin(char *p)
{
    char *q;
    q=p;
    while(*q!='\0')
       q++;
    q--;



}


