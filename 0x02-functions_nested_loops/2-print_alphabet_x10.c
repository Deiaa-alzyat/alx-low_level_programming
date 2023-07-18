#include "holberton.h"

void print_alphabet_x10(void)
{
    char letter = 'a';
    int i;

    for (i = 0; i < 10; i++)
    {
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        letter = 'a'; // Reset letter to 'a' for the next iteration
    }

    _putchar('\n');
}
