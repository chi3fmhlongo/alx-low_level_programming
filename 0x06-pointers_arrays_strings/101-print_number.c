#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    int divisor = 1;

    // Handle negative numbers
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    // Find the divisor to get the leftmost digit
    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    // Print each digit one by one
    while (divisor != 0)
    {
        _putchar('0' + n / divisor);
        n %= divisor;
        divisor /= 10;
    }
}
