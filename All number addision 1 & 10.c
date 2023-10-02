#include<stdio.h>
int main()
{
    int  a , i=1 , result=0;

    printf("Type Your number for How much you want To addition : ");

    scanf("%d",&a);


    for (i=1;i<=a;i++)
    {
        result = result + i;

    }

     printf("\n\nOkey Your All value Addition Done And Ans is : %d\n\n",result);

    return 0;
}
