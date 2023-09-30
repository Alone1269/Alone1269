#include<stdio.h>

int main ()
{
    char operetor ;
    double a ;
    double b ;
    double result ;

    printf("\nType what do you want (+ - * /)  : ");
    scanf("%c",&operetor);

    printf("\n\n Type Your value for A :");
    scanf("%lf",&a);

    printf("\n\n Type Your value for B :");
    scanf("%lf",&b);

    switch(operetor)

        {
        case '+':
            result = a + b ;
            printf("\n\nYour Addision is : %lf\n\n\n",result);
            break;
        case '-':
            result = a - b ;
            printf("\n\nYour Subaddision is : %lf\n\n\n",result);
            break;
        case '*':
            result = a * b ;
            printf("\n\nYour Multiply is : %lf\n\n\n",result);
            break;
        case '/':
            result = a / b ;
            printf("\n\nYour Division is : %lf\n\n\n",result);
            break;



        default:
            printf("\n %c IS NOT VALID ! Error! please FIRSTLY type operetor (+ - * /)\n",operetor);

        }

        return 0;




}
