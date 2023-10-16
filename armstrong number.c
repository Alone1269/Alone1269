#include<stdio.h>
#include<math.h>
int main()
{
    int n , rem , cub, sum=0 , mainnumber;

    printf("Type your number for check armstrong number of not : ");
    scanf("%d",&n);

    mainnumber = n ;

    while (n>0)
    {
        rem = n % 10;
        cub = pow(rem,3);
        sum = sum + cub ;
        n = n / 10;
    }
    
    if(mainnumber==sum)
    {
        printf("%d Your number is  an armstrong number ",n);
    }
    else
    {
        printf("%d Your number is  not an armstrong number ",n);
    }
    



    return 0;
}