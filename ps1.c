#include<stdio.h>
int main()
{
    int ba ,ts;
    float da,hra,pf,allow;
    char grade;
    printf("enter the ba and grade");
    scanf(" %d\n %c",&ba,&grade);
    da=(50/100)*ba;
    hra=(20/100)*ba;
    pf=(11/100)*ba;
    if(grade=='A')
        allow=1700;
        else if(grade=='B')
            allow=1500;
        else
            allow=1300;
    ts=ba+hra+da+allow-pf;
    printf("salary=%d",ts);
        return 0;
}
