#include<stdio.h>
int main()
{

    int n , rem, tem , sum = 0 ;
    printf("Type your number for check palindrome number or not : ");
    scanf("%d",&n);
    tem = n;
    while (n != 0)
    {
        rem = n %10;
        sum = sum*10 + rem;
        n = n / 10;
    }
   if (tem == sum)
   {
     printf("\n\nYour number is an palindrome number ");
   }
   else
   {
    printf("\n\nYour number is not an palindrome number ");
   }
   
    
    
    return 0 ;
}