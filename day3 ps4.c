#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,fact=1,sum=1,x;
    printf("no.of terms");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;

          sum=sum +(pow(x,i)*pow(-1,i)/fact);

    }
    printf("%d",sum);
}

