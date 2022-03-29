#include "main.h"

/**
  * *string_toupper - changes all lower case letters of a string to uppercase
  *@str: input string
  *Return: string in uppercase
  */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
