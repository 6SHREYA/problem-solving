#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the coordinate x,y");
    scanf("%d%d",&x,&y);
    if(x>0)
    {
        if(y>0)
        printf("first");
        else
            printf("second");
    }
    else
    {
        if(y>0)
        printf("third");
        else
            printf("fourth");
    }
}


