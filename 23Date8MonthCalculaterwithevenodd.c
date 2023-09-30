#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int
main ()
{

char operator[10];

double a;

double b;

double result;


        printf("Hello dear! I'm joy From Mirpur ! i try to make a calculator So now you can just useing \n (+ , - , * , / , evenodd , mixmum) Thats it ! I will try my best for Add now Mathmatic\n\n\n");
        printf("\nType what do you want (+ - * / %) Or EvenOdd (evenodd) Or Mixmum (mixmum)  : ");

        scanf ("%s", operator);


        printf ("\n\nType Your value for A :");

        scanf ("%lf", &a);


        printf ("\n\nType Your value for B :");

        scanf ("%lf", &b);


    if (strcmp (operator, "+") == 0)

        {

            result = a + b;

            printf ("\n\nYour Addition is : %0.2f\n\n\n", result);

        }

    else if (strcmp (operator, "-") == 0)

        {

            result = abs(a - b);

            printf ("\n\nYour Subtraction is : %0.2f\n\n\n", result);

        }

     else if (strcmp (operator, "*") == 0)

        {

            result = a * b;

            printf ("\n\nYour Multiplication is : %0.2f\n\n\n", result);

        }

  else if (strcmp (operator, "/")== 0)

        {

            result = a / b;

            printf ("\n\nYour Division is : %f\n\n\n", result);

        }
    else if (strcmp(operator,"%")==0)
        {

            if(b>0)
                {
                    result=(int)a%b;
                    printf("%lf",result);
                }
            else
                {
                    printf("Math error");
                }
        }

    else if (strcmp (operator, "evenodd") == 0)

                {


                        if ((int) a % 2 == 0)

                            {

                                printf ("\n\n\nYour number %f is an Even number\n\n\n", a);

                            }

                        else

                            {

                                printf ("\n\n\nYour number %f is an Odd number\n\n\n", a);

                            }

                        if ((int) b % 2 == 0)

                            {

                                printf ("\n\n\nYour number %0.2f is an Even number\n\n\n", b);

                            }

                        else

                            {

                                printf ("\n\n\nYour number %0.2f is an Odd number\n\n\n", b);

                            }

                }

    else if (strcmp(operator,"mixmum")==0)
        {
            if (a>b)
                {
                    printf("\n\n\nThe number %f is mixmum than %f So we can see A big mixmum!\n\n\n",a,b);
                }
            else
                {
                    printf("\n\n\nThe number %f is mixmum than %f So we can see B big mixmum!\n\n\n",b,a);
                }
        }

  else

    {

    printf("\n\nYOU NOUGHT BOY :)!! \n\n %s IS NOT VALID! PLEASE FIRSTLY TYPE (+ - * /) Or EvenOdd (KEY :evenodd) Or Mixmum (KEY :mixmum)\n PLEASE TRY AGAIN !\n",
	 operator);


    }


    return 0;

}



