#include<stdio.h>
int main()
{
    int a,h,b;
    printf("enter the area and base");
    scanf("%d %d",&a,&b);
    h=height(a,b);
    printf("%d",h);
}
int height(int area,int base)
{
    int height;
    height=(2*area)/base;
    return (height);
}
