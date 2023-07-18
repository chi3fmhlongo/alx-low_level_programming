#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    unsigned long int fib1 = 1, fib2 = 2, fib_sum;

    printf("%lu, %lu", fib1, fib2);

    for (i = 2; i < 98; i++)
    {
        fib_sum = fib1 + fib2;
        printf(", %lu", fib_sum);

        fib1 = fib2;
        fib2 = fib_sum;
    }

    printf("\n");

    return 0;
}
