#include<stdio.h>
int main()
{
    int d,sum,c;
    printf("enter the digit");
    scanf("%d",&d);
    while(d/10>0)
    {
        sum=0;
        while(d>0)
        {
            c=d%10;
            sum=sum+c;
            d=d/10;
        }
        if(sum/10>0)
        {
            d=sum;
        }
        else
            break;
    }
    printf("%d",sum);

}
