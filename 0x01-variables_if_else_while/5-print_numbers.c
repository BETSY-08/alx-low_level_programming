#include <stdio.h>

/**
 * main - entry point
 * prints all single digit numbers between 0 and 9
 * Return: 0
 */

int main(void)
{
	int n = 0;

	for (n = '0' ; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
