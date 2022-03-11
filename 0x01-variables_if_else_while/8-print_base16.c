#include <stdio.h>

/**
 * main - entry point
 * Description: prints all numbers of base16 in lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int n = '0';
		while (n <= '9')
		{
			putchar(n);
			n++;
		}
		char c = 'a';

		while (c <= 'f')

		{
			putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
}
