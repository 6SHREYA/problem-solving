#include<stdio.h>
int main()
{
    int d,c,sum1,sum2,x,count=0;
    printf("enter the digit");
    scanf("%d",&d);
    c=d;
    while(c>0)
    {
        c=c/10;
        count++;
    }
    c=d;
    sum1=0;
    x=0;
    while(x!=count/2)
    {
      sum1=sum1+c%10;
      c=c/10;
      x++;
    }
    c=c/10;
    while(c>0)
    {
        sum2=sum2+c%10;
        c=c/10;
    }
    if(sum1==sum2)
        printf("balanced");
    else
    printf("not balanced");



}
