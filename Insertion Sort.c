#include<stdio.h>
int main()
{
    printf("\n\n Insertion Sort \n");
    int a[1000] , i , j , l , n , m , k , v;
    printf("how much variable you need to input : ");
    scanf("%d",&n);
    
    for(m=0 ; m<n ; m++)
    {
        scanf("%d",&a[m]);
    }
    
    for(i=1 ; i<n ; i++)
    {
        l = a[i];
        k = i - 1;
        
        while( k>=0 && a[k] > l)
        {
            a[k + 1] = a[k];
            k--;
        }
        a[k + 1] = l ;
    }
    for(v = 0 ; v < n; v++)
    {
        printf(" %d",a[v]);
    }
    
    return 0;
}
