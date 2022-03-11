#include <stdio.h>

/**
 * main - entry point
 * prints all single digit numbers between 0 and 9
 * Return: 0
 */

int main(void)
{
	int n = 0;

	do {
		printf("value of n: %d\n", n);
		n = n + 1;
	} while (n <= 9);
	return (0);
}
