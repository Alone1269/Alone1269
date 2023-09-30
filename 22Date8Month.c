#include<stdio.h>

int main ()
{
    printf ("\n\n Try to find out even or odd Number ! \n\n");

    int a , b , x , y ;

    printf ("Type a value for a :");
    scanf("%d",&a);

    printf ("\n\nType a value for b :");
    scanf("%d",&b);

    x = a*b ;
    y = a/b ;

    if (x % 2 == 0)
    {
        printf("\n\n\nThe number is a and b multiply Is : %d Who is Even Number ",x);
    }
    else
    {
        printf("\n\n\nThe number is a and b multiply Is : %d Who is ODD Number \n\n\n",x);
    }

    if (y % 2 == 0)
    {
        printf("\n\n\nThe number is a and b Divied Is : %d Who is Even Number ",y);
    }
    else
    {
        printf("\n\n\nThe number is a and b Divied Is : %d Who is ODD Number \n\n\n",y);
    }

    return 0;



}
