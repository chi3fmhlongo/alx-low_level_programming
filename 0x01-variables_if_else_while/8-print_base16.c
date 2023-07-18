#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main() 
{
    char ch;

    for (ch = '0'; ch <= '9'; ch++) 
    {
        putchar(ch);
    }

    for (ch = 'a'; ch <= 'f'; ch++) 
    {
        putchar(ch);
    }

    putchar('\n');

    return 0;
}
