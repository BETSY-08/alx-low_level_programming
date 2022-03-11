#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * numbers must be separated by a comma
 * numbers should be in ascending order
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
