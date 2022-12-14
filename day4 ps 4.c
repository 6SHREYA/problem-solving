#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the range m to n");
    scanf("%d %d",&m,&n);
    perfect(m,n);
    return 0;
}
void perfect(int x, int y)
{
    int k,sum,j;
    for(k=x;k<=y;k++)
    {
       sum=0;
       for(j=1;j<=k/2;j++)
       {
           if(k%j==0)
             sum=sum+j;
       }
       if(sum==k)
        printf("%d\t",k);
    }
}

