#include<stdio.h>
int main()
{
    int i , n ;
    int count = 0;
    printf("Type a number for check prime number or not : ");
    scanf("%d",&n);
    
    if(n <= 1)
    {
        printf("please Type up to 1 ");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if( n % i == 0)
            {
                count++;
                break;
            }
        }
        
        
    }
    
    if(count==0)
    {
        printf("\n\n%d Is a prime number ", n);
    }
    else
    {
        printf("\n\n%d Is not a prime number ", n);
    }
    
    return 0;
}