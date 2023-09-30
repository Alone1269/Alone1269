#include<stdio.h>

int main ()
{

printf("\nThis flotform For division !\n\n");

float x,y,z;

printf("Type you value for x :");
scanf("%f",&x);

printf("\nType your value for y :");
scanf("%f",&y);

if (x>y)
{
    z=x/y;
    printf("\n\nYou division ans is : %.3f\n\n",z);
}

else
{
   printf("\n\nYour Ans is infinity\n\n");

}

return 0;


}
