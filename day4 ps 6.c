#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the range m to n");
    scanf("%d %d",&m,&n);
    armstrong(m,n);
    return 0;
}
void armstrong(int x, int y)
{
    int i,j,c,p,r,sum;
    for(i=x;i<=y;i++)
    {
        c=0;
        p=i;
        sum=0;
       while(p>0)
      {
          c++;
           p=p/10;
      }
      p=i;
       while(p>0)
       {
           r=p%10;
           sum=sum+pow(r,c);
           p=p/10;
       }
       if(sum==i)
        printf("%d\t",i);
    }
}

