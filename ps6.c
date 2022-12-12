#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)
    {
        if(b==c)
        printf("equilateral");
        else
            printf("isoceles");
    }
    else
    {
        if(a==c)
        printf("isoceles");
        else
            printf("scalene");
    }



}
