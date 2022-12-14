#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the range m to n");
    scanf("%d %d",&m,&n);
    prime(m,n);
    return 0;
}
void prime(int x, int y)
{
    int k,j,c=0;
    for(k=x;k<=y;k++)
    {
       for(j=2;j<(k/2) ;j++)
      {
          if(k%j==0)
           {
             c=1;
           }
      }
       if(c==0)
          printf("%d\t",k);

    }
}
