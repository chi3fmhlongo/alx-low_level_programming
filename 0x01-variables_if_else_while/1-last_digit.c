#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints the last digit
 *              along with its properties.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(NULL));
    n = rand();

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10;

    if (lastDigit > 5) {
        printf("%d and is greater than 5", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0", lastDigit);
    }

    printf("\n");

    return (0);
}
