#include <stdio.h>

int main() {
    int i, a = 0, b = 1, n, sum = 0;

    printf("Type your number to check for Fibonacci numbers: ");
    scanf("%d", &n);

    printf("Fibonacci Numbers: %d, %d, ", a, b);

    for (i = 2; i < n; i++) 
    {
        sum = a + b;
        printf("%d, ", sum);
        a = b;
        b = sum;
    }

    return 0;
}
