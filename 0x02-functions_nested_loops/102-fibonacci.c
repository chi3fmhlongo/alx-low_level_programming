#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int fibonacci[50];
    int i;

    // Initialize the first two Fibonacci numbers
    fibonacci[0] = 1;
    fibonacci[1] = 2;

    // Compute the rest of the Fibonacci numbers
    for (i = 2; i < 50; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Print the first 50 Fibonacci numbers separated by comma and space
    for (i = 0; i < 49; i++)
    {
        printf("%d, ", fibonacci[i]);
    }

    // Print the last number without the comma and space
    printf("%d\n", fibonacci[49]);

    return 0;
}
