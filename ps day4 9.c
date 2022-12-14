#include<stdio.h>
int main()
{
    int n1,n2,i,max;
    printf("enter the numbers for lcm");
    scanf("%d %d",&n1 ,&n2);
    if(n2>n1)
        max=n2;
    else
        max=n1;
    while(1)
    {
           if(max%n1==0&&max%n2==0)
           {
               printf("%d",max);
               break;
           }
           max++;
    }
}
