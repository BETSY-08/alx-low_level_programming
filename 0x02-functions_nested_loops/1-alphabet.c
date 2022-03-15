#include "main.h"

/**
* main - entry point
* Description: prints alphabets in lowercase followed by new line
* Return: 0
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');

return (0);
}
