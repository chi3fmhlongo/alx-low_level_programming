#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main() 
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) 
    {
        if (letter != 'q' && letter != 'e') 
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return 0;
}
