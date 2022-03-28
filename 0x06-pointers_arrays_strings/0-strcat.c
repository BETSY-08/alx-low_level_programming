#include "main.h"

/**
  * _strcat - function that appends the str string to the dest string
  * overwrites the terminiting null byte at the end of dest
  * adds a terminiting null byte
  *@src: first pointer character
  * @dest: second pointer character
  * Return: new string
  */

char *_strcat(char *dest, char *src)
{
int b;
int n;

for (b = 0; dest[b] != '\0'; b++)
	continue;
for (n = 0; src[n] != '\0'; n++)
{
	dest[b] = src[n];
	b++;
}
dest[b] = '\0';
return (dest);
}
