#include<stdio.h>
int main()
{
    int n,s;
   printf("enter the no. of socks");
   scanf("%d",&n);
   s=min(n);
   printf("%d",s);
}
int min(int x)
{
    return(x+1);
}
