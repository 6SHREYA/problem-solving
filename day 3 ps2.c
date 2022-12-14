#include<stdio.h>
void main()
{
    int i,n,fact=1,sum,x;
    printf("no.of terms");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {

        fact=fact*i;
        sum=sum+(x*i/fact);
    }
    printf("%d",sum);
}
