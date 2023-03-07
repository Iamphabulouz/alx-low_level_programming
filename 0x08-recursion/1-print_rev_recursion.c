#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse recursively.
 * @s: pointer to the string to be printed.
 */
void _print_rev_recursion(char *s)
{
    /* base case */
    if (*s == '\0')
    {
        return;
    }
    else
    {
        /* recursive call */
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}

/**
 * main - entry point for the program
 * Return: 0 on success.
 */
int main(void)
{
    char str[] = "Hello, world!";
    _print_rev_recursion(str); /* Output: !dlrow ,olleH */
    return (0);
}
