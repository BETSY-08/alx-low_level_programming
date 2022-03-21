#include "main.h"
#include "2-strlen.c"

/**
* puts_half - inputs
* @str: string to print
*/

void puts_half(char *str)
{
int m = 0;
int k = 0;
if (_strlen(str) % 2 != 0)
{
k += 1;
}
for (m = (_strlen(str) + k) / 2; m < _strlen(str); m++)
_putchar(*(str + m));
_putchar('\n');
}
