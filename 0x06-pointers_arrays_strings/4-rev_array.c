#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  *@a: first integer
  *
  *@n: number of elements of array
  *Return: 0
  */

void reverse_array(int *a, int n)
{
	int begin = 0;
	int temp;

	for ( ; begin < n--; begin++)
	{
		temp = a[begin];
		a[begin] = a[n];
		a[n] = temp;
	}
}
