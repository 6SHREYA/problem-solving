#include<stdio.h>
int main()
{
    int n,h;
    printf("enter no. of attendees");
    scanf("%d",&n);
    h=handshake(n);
    printf("%d",h);
}
int handshake(int x)
{
    return(x-1);
}

