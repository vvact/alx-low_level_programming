#include "main.h"
/**
* print_alphabet_x10 - Entry
* print alphabet x10 - prints 10 times the alphabet, in lowercase
* Return: Always 0
*/

void print_alphabet_x10(void)

{
char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
