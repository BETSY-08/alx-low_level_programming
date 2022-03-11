#include <stdio.h>

/**
 * main - entry point
 * Description: print all lower case alphabets
 * must be in reverse, followed by new line
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
