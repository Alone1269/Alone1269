#include <stdio.h>

int main() {
  int x ,y,z ;

  printf("Type your value for division :");
  scanf("%d",&x);

  printf("\nType your 2nd value for division :");
  scanf("%d",&y);

  z= x/y;

 printf("\n\nYour result is : %d ",z);


  printf("\nYour Difarenc :%d\n\n", z>x); // Returns 1 (true) because 10 is greater than 9
  return 0;
}
