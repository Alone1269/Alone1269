#include<stdio.h>
int main()
{
    printf("Welcome Mr/Ms... \n\n Bobble Sort! \n\n");
    
    int x[100] , y , z;
    printf("How many number bubbles do you want to pick : ");
    scanf("%d",&y);
    int i , j , l, m , o , temp;
    
    if(y >= 6)
    {
        printf("\n\n\"Ohh Dear You Are So Energetic\" \n\"Good\" Now You Can Type %d Number I'm ready to solve : \n ", y);
    }
    else
    {
        printf("\n\n\"Good\" Now You Can Type %d Number I'm ready to solve : \n ", y);
    }
    
    
    for(i=0; i< y ; i++)
    {
        scanf("%d",&x[i]);
    }
    
    printf("\n Your Question for Bobble Sort : ");
    for(o = 0 ; o<y ; o++)
    {
        printf("%d ",x[o]);
    }
    
    
    for(j = 0 ; j < y-1 ; j++)
    {
        for(l=0 ; l < y - 1 ; l++)
        {
            if( x[l] > x[l+1])
            {
                temp = x[l];
                x[l] = x[l+1];
                x[l+1] = temp;
            }
        }
    }
    printf("\n\n Now Your Bobble Sort Answer Is : ");
    for(m = 0 ; m<y ; m++)
    {
        printf("%d " ,x[m]);
    }
    
    return 0;
    
}
