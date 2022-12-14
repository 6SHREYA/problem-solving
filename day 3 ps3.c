#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,x,fact=1,sum=1;
    printf("no.of terms");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum +(pow(x,i)/fact);
    }
    printf("%d",sum);
}
