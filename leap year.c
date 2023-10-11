#include<stdio.h>

int main()
{
    printf("For find out leap year Or not !");

    int y , a , b , c;
    printf("\n\nTyper Your year for which is leap year Or Not : ");
    scanf("%d",&y);
    if((y%400==0)||(y%4==0 && y%100!=0))
    {
        printf("\n\n%d Is a leap year \n\n",y);
    }
    else
    {
        printf("\n\n%d is not a leap year \n\n",y);
        a=y+1;
        if((a%400==0)||(a%4==0 && a%100!=0))
        {
            printf("\n\n  %d This leap year  is near by %d",a,y);
        }
        else
        {   b=a+1;
             if((b%400==0)||(b%4==0 && b%100!=0))
            {
                printf("\n\n  %d This leap year  is near by %d",b,y);
            }
            else
            {
                printf("\n\n  %d This leap year  is near by %d",c,y);

            }
        }
    }
    printf("\n\n");
    return 0;
}
