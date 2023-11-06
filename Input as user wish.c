#include <stdio.h>
int main()
{
    int a , b ,i , number ,multiple, sum =0;
    
    printf("how much number you want to input : ");
    scanf("%d",&a);
    
    for(i=1; i <= a ; i++)
    {
        printf("number %d :",i);
        scanf("%d",&number);
        sum= sum + number;
        multiple = multiple + number ; 
    }
    
    printf("All number sum is : %d\n", sum);
    printf("All number sum is : %d", multiple);
    
    return 0 ;
}