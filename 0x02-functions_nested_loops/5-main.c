#include "main.h"

int main(void)
{
    _putchar(',');
    _putchar(' ');
    _putchar(print_sign(0) + '0');
    _putchar(',');
    _putchar(' ');
    _putchar(print_sign(0xff) + '0');
    _putchar(',');
    _putchar(' ');
    _putchar(print_sign(-1) + '0');
    _putchar('\n');
    return (0);
}
