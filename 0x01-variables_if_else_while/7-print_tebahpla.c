#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: 0 (Success)
 */
int main() {
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--) {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
