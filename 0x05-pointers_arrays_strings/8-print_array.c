#include "main.h"
#include <stdio.h>

/**
 * print_array -rints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int k;

for (k = 0; k < n; k++)
{
if (k == 0)
printf("%d", a[k]);
else
printf(", %d", a[k]);
}
printf("\n");
}


