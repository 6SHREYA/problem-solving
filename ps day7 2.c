#include<stdio.h>
int xstrrev(char*);
int main()
{
    char str[20];
    char n;
    printf("enter the string\n");
    scanf("%s",&str);
    xstrrev(str);
    printf("rev string is=%s",str);
}

int xstrrev(char *bp)
{
    char ch,*ep;
    ep=bp;
    while(*ep!='\0')
    {
        ep++;
    }
      ep--;
        while(bp<ep)
        {
           ch=*bp;
          *bp=*ep;
          *ep=ch;
          bp++;
          ep--;
        }
}

