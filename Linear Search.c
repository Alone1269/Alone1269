#include<stdio.h>
int main()
{
    int a[1000] , i , j , n , x ,m;
    printf("  \" Linear Search \" \n\n\n\n How much number you want to input : ");
    scanf("%d",&n);
    for(x=0 ; x<n ; x++)
    {
        scanf("%d",&a[x]);
    }
    printf("Which number you want to check : ");
    
    scanf("%d",&m);
    for(j=0; j<n ;j++ )
    {
        if(a[j] == m)
        {
            printf("\nYour element index number:  %d",j);
            break;
        }
        else
        {
            printf("Your element Is Not Found!");
            break;
        }
    }
    
    
    
    
    return 0;
}
