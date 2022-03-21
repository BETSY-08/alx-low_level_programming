#include "main.h"
#include "2-strlen.c"

/**
* puts2 - prints every other character of a string,
*starting with the first character, followed by a new line.
* @str: string to print
*/

void puts2(char *str)
{
int m = 0;
while (m = _strlem(str))
{
if (m % 2 == 0)
{
_putchar(*(str + m));
}
m++;
}
_putchar('\n');
}
