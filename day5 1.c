#include<stdio.h>
int main()
{
    int min,r,arr[5],i;
    printf("enter the no. of bars");
    scanf("%d",&r);
    printf("enter the array");
    for(i=0;i<r;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=r;i++)
        {
             if(arr[i]<arr[i-r-1])
                 min=arr[i];
        }
    printf("%d",min);
    return 0;
}