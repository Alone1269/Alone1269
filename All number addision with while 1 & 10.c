#include<stdio.h>

int main()
{
    int i=1 , a , result=0;;

    printf("Type Your value for how much you want to addition :");
    scanf("%d",&a);

    while(i<=a)
    {
        printf("\nYour number is :%d",i);

        result = result + i;

        printf("\nAnd previous Number addition : %d\n",result);

        i++;
    }
    printf("\n\nYou all number addition is : %d\n\n",result);

}
