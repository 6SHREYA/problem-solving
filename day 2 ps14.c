#include<stdio.h>
int main()
{
 int i,j,a[100][100],l,h,n,m;
printf("enter n");
scanf("%d",&n);
m=n;
l=0;
h=2*n-1;
 while(n>0)
 {
   for(i=l;i<h;i++)
   {
     for(j=l;j<h;j++)
       {
           if(i==l||i==h-1||j==l||j==h-1)
           {
             a[i][j]=n;
           }
       }
   }
    l++;
    h--;
    n--;
 }
 l=0;
 h=2*m-1;
  for(i=l;i<h;i++)
  {
        for(j=l;j<h;j++)
        {
          printf("%d",a[i][j]);
        }
     printf("\n");
  }
}

