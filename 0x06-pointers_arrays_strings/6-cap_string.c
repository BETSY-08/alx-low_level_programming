#include "main.h"

/**
  * *cap_string - capitalize all words of a string
  *@str: input string
  *Return: string in caps
  */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0; str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i] = str[i + 1] - 32;
		}
		}
		i++;
	}
	return (str);
}
