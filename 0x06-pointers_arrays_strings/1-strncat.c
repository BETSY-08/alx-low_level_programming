#include "main.h"

/**
  * _strncat - concatenates two strings
  *@src: first pointer character
  * @dest: second pointer character
  *@n: number of bytes
  * Return: new string
  */

char *_strncat(char *dest, char *src, int n)
{
int b;
int j;

for (b = 0; dest[b] != '\0'; b++)
;
for (j = 0; j < n; &&src[j] != '\0'; j++)
	dest[b + j] = src[j];

dest[b] = '\0';
return (dest);
}

