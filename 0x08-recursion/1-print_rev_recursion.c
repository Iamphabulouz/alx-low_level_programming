#include <stdio.h>

void _print_rev_recursion(char *s);

int main2(void)
{
    char str[] = "Hello, world!";
    _print_rev_recursion(str);
    return 0;
}

void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    else
    {
        _print_rev_recursion(s + 1);
        putchar(*s);
    }
}
