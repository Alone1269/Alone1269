#include<stdio.h>

 int
main ()
{


    //First of all i want to print what about this program !

printf ("Let's Try to division For your entry number ! ");



int q;

float x, y, z;


printf ("\n\nType your number for whice is big :");

scanf ("%d", &q);

    //now entry 2 value for the division then we try to get whice is big result or your type number !!

printf ("\n\nNow type your value for division : ");

scanf ("%f", &x);


printf ("\n\nNow type your 2nd Value for division :");

scanf ("%f", &y);

if (y > 0)

    {

z = x / y;

printf ("\n\nYou x and y division is : %f", z);


if (z > q)

	{

printf
	    ("\n\nYour answer is bigger than your Input number mean : true \n\n");


}

      else

	{

printf
	    ("\n\nYour answer is lower than your input number mean : False \n\n");


}


}

  else

    {

printf ("\n\nYou value is infinite\n\n");

}






return 0;



}



