#include "main.h"
/**
*isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int isupper(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
