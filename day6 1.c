#include<stdio.h>
void main()
{

    int a[10][10],t,i,r1,com1,j,k,n[10][10];
    printf("enter the number of rows and column of first matrix\n");
    scanf("%d %d",&r1,&com1);
    int l=0,h=com1-1;

    printf("enter the elements of of first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<com1;j++)
        scanf("%d",&a[i][j]);
    }
    printf("entered matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<com1;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<r1;i++){
        for(j=0;j<com1;j++){
            if(i>j){
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
        
    }
    
    printf("the transpose of matrix is\n");
    for(i=0;i<com1;i++)
    {
        for(j=0;j<r1;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("the clockwise rotation\n");
    for(j=0;j<com1/2;j++){
        for(i=0;i<r1;i++){
            t=a[i][l];
            a[i][l]=a[i][h];
            a[i][h]=t;
        }
        l++;
        h--;
    }
    
    for(i=0;i<com1;i++)
    {
        for(j=0;j<r1;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }


}