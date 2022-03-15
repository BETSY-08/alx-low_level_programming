#include "main.h"

/**
* print_alphabet - prints alphabets in lowercase followed by new line
*
*/

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
