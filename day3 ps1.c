#include<stdio.h>
void main()
{
    int i,n,x,fact=1, sum=0;
    printf("no.of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact/i);

    }
    printf("%d",sum);
    return 0;
}
