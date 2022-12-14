#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x1,x2,y;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    y=(pow(b,2)-4*a*c);
    if(y>0)
    {
    x1=(-b+pow(y,2))/(2*a);
    x2=(-b-pow(y,2))/(2*a);
    printf("%d %d",x1,x2);
    }
    else if (y=0)
    {
        x1=-b/(2*a);
        x2=x1;
        printf("%d %d",x1,x2);
    }
    else
    {
        printf("no real roots");
    }

}

