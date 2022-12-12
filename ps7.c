#include<stdio.h>
int main()
{
    float temp;
    printf("enter the temperature");
    scanf("%f",&temp);
    if(temp<40)
    {
        if(temp>=30)
            printf("its hot");
        else
        {
            if(temp>=20&&temp<30)
              printf("normal");
             else
             {
                if(temp>=10&&temp<20)
                    printf("cold");
                else
                    {
                       if(temp>=0&&temp<10)
                       printf("very cold");
                       else
                        printf("freezing");
                    }
             }
        }
    }
    else
        printf("very hot");

    }
