#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
    long int fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;

    while (fib2 <= 4000000)
    {
        if (fib2 % 2 == 0)
        {
            even_sum += fib2;
        }

        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;
    }

    printf("%ld\n", even_sum);

    return 0;
}
