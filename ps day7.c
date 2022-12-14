
#include<stdio.h>
int xstrlen(char *);
int main()
{
    char str[10],l;
    printf("enter the string\n");
    scanf("%s",&str);
    l=xstrlen(str);
    printf("%d",l);
}
int xstrlen(char *p)
{
    int c=0;
    while(*p!='\0')
    {
        c++;
        p++;
    }
    return c;
}
