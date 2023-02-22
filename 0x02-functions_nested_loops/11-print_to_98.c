#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;
    char comma = ',';
    char space = ' ';
    char digit;

    if (n <= 98)
    {
        for (i = n; i < 98; i++)
        {
            digit = i + '0';
            _putchar(digit);
            _putchar(comma);
            _putchar(space);
        }
    }
    else
    {
        for (i = n; i > 98; i--)
        {
            digit = i + '0';
            _putchar(digit);
            _putchar(comma);
            _putchar(space);
        }
    }
    _putchar('9');
    _putchar('8');
    _putchar('\n');
}
