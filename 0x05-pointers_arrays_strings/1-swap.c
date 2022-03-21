#include "main.h"

/**
* swap_int - function that swaps values of two integers
* integers are a and b
*@a: first integer
*@b: second integer
*/

void swap_int(int *a, int *b)
{
int d;

d = *a;
*a = *b;
*b = d;
}
