#include "main.h"
#include "2-strlen.c"

/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: string to print
* Return: string reversed
*/

void print_rev(char *s)
{
int len;
for (len = _strlen(s) - 1; len >= 0; len--)
_putchar(s[len]);
_putchar(10);
}
