#include "main.h"

/**
  * _strncpy - copies a string
  *@dest: first string
  *@src: second string
  *@n: number of bytes
  *Return: copied  string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

for (b = 0; b < n && src[b] != '\0'; b++)
	dest[b] = src[b];
for ( ; n < b; b++)
	dest[b] = '\0';

return (dest);
}
