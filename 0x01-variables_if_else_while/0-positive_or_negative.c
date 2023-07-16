#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the properties of a number.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(NULL));
    n = 98;

    printf("%d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }

    printf("\n");

    return (0);
}
