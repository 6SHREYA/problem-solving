#include<stdio.h>
int main()
{
    int r,area;
    printf("enter the radius of circle");
    scanf("%d",&r);
    printf("the maximum area that can be enclosed is 2*r^2")
    area=pow(r,2)*2;
    printf("%d",area);
}
