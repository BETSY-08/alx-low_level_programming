#include "main.h"
#include "2-strlen.c"

/**
* rev_string - reverses a string.
* @s: string to print
* Return: string reversed
*/

void rev_string(char *s)
{
int m;
char y;

for (m = 0; m < _strlen(s) / 2; m++)
{
y = s[m];
s[m] = s[_strlen(s) - m - 1];
s[_strlen(s) - m - 1] = y;
}
}
