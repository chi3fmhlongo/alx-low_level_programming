#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the single-digit numbers of base 10
 *              in a single line, followed by a newline character.
 *              Adheres to the Betty coding style.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	putchar('\n');

	return (0);
}
