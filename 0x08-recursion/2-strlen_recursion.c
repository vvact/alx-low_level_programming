#include "main.h"
#include "string.h"
/**
 * _strlen_recursion- returns the string length
 * @s : The string to be printed
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
