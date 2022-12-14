#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int c=0,i,n,x,j;
    printf("enter string\n");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&& str[i+1]!=' ')
            c++;
    }
    printf("%d",c+1);

}

