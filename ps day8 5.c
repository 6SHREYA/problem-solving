#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("1");
        else if(i%2==0)
            printf("\t 2 ");
        else
        {
                for(k=3;k<=i;k++)
                {
                    if(i%k==0)
                        printf("%d ",k);
                        break;
                }


        }



    }

}
