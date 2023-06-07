#include "main.h"
#include "string.h"
/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s:reversed string to be printed
 * Return: Always 0 (success)
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
