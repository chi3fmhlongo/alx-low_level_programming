#include "main.h"
#include <ctype.h>
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/
char *cap_string(char *str) {
    int i = 0;

    // Capitalize first character of the string
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = toupper(str[i]);
    }

    // Loop through the string
    while (str[i] != '\0') {
        // Check for separators and capitalize the next character after them
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            i++; // Move to the next character after the separator

            // Capitalize the next character if it's a lowercase letter
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = toupper(str[i]);
            }
        } else {
            i++; // Move to the next character
        }
    }

    return str;
}

