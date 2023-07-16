#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a random number.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(NULL));
    n = rand() % 10;  // Generate a random number between 0 and 9 (inclusive)

    lastDigit = n;

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit > 5)
    {
        printf("greater than 5");
    }
    else if (lastDigit == 0)
    {
        printf("0");
    }
    else
    {
        printf("less than 6 and not 0");
    }

    printf("\n");

    return (0);
}
