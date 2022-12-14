#include<stdio.h>
int main()
{
    int n,num,p=0,m;
    printf("enter the no. to be checked");
    scanf("%d",&n);
    num=n;
    pal(p,n,num);
    return 0;

}

void pal(int x,int y,int z)
{
    if(y==0)
      {
          if(x==z)
            printf("palindrome");
          else
            printf("not palindrome");

      }
    pal(x*10+y%10,y/10);
}
