#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main() {
    int number;

    for (number = 0; number <= 9; number++) {
        putchar('0' + number);
    }

    putchar('\n');

    return 0;
}
