#include <stdio.h>

/**
 * main - entry point
 * prints all single digits without using any variable of type char
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
