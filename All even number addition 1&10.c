#include<stdio.h>
int main()
{
    int i=2, n , result=0;

    printf("Type Your value for how much you want to addition :");
    scanf("%d",&n);

    do
    {
       printf("\nYour number is :%d",i);
       result += i;
       printf("\nAnd previous Number addition : %d\n",result);
       i+=2;
    }
    while(i<=n);

    printf("\n\nYou all number addition is : %d\n\n",result);

    return 0;

}

