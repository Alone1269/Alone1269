#include<stdio.h>

int main ()
{
    printf("\n\nType your age for know can you capable for voting !\n\n");

    float age , z;
    int voteingAge = 18;

    printf("Type your age for know can you capable for voting :");
    scanf("%f", &age);

    if (age >= voteingAge )

        {
            printf("\n\n\nYou are capable for voting !\n\n");
        }
    else

        {
            z= voteingAge - age;

            printf("\n\n\nYou are not capable for voting ! You are capable after :%f year/month !\n\n",z);
        }

    return 0;
}
