#include<stdio.h>
int main()
{
 char a[10],l,i,j;
 printf("enter string");
 scanf("%s",&a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
     for(j=0;j<i;j++)
        printf(".");
     printf("%s",a+i);
     printf("\n");
 }
}
