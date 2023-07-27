#include "main.h"

int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    _putchar('0' + n % 10);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
