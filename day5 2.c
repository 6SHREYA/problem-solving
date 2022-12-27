#include<stdio.h>
int main()
{
    int lower,upper,mid,i,n,a[5],m,temp;
    printf("enter the no. of candles");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("enter the arr[%d] element\n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            n=a[i+1];
        }
    }
    printf("%d",n);
}