#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the no.");
    scanf("%d",&n);
    t=fact(n);
    printf("%d",t);
}
int fact(int x)
{
    if(x==0||x==1)
        return(1);
    else
        return(x*fact(x-1));
}
