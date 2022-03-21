#include "main.h"

/**
* rev_string - reverses a string.
* @s: string to print
* Return: string reversed
*/

void rev_string(char *s)
{
int l, k, m;
char y;

l = 0;
m = 0;

while (s[l] != '\n')
{
l++;
}
m = l - 1;

for (k = 0; k < l / 2; k++)
{
y = s[k];
s[k] = s[l];
s[m--] = y;
}
}
