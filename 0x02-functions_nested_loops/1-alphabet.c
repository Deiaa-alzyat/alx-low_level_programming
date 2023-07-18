#include "holberton.h"
/**
* print_alphabet - prints the english alphabet from a-z.
* Return: Nothing.
*/
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
