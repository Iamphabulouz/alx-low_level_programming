#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n'); /* print newline character and return */
		return;
	}

	_putchar(*s); /* print current character */
	_puts_recursion(s + 1); /* call function recursively with next character */
}
