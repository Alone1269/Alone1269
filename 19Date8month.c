#include<stdio.h>

int main()
{
printf("Try to find out Maximum !");
int a,b,c,x,y,z;

printf("\n\nType Number for a : ");
scanf("%d",&a);

printf("\n\nType Number for b : ");
scanf("%d",&b);

printf("\n\nType Number for c : ");
scanf("%d",&c);

x = a*b;
y = a*c;
z = b*c;

printf("\n\n X Is the sum of a and b : %d",x);
printf("\n\n Y Is the sum of a and c : %d",y);
printf("\n\n Z Is the sum of b and c : %d",z);

if(x>y && x>z)
{
    printf("\n\nThe Biggest number is X between a and b sum : %d\n\n\n",x);
}
else if (y>z && y>x)
{
     printf("\n\nThe Biggest number is Y between a and c sum : %d\n\n\n",y);
}
else
{
     printf("\n\nThe Biggest number is Z between b and c sum : %d\n\n\n",z);
}
return 0;
}


