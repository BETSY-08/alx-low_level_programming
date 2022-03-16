#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: begining integer
* add new line at the end
* all numbers should be separated by a comma
* all numbers should be in order
* Return: void
*/

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("98\n");
}
