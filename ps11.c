#include<stdio.h>
void main()
{
    int i,j,x='A';
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c",x);
    printf("\n");
    x++;
    }
}
