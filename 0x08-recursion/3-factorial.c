#include "main.h"
/**
 * factorial- returns the fatorial of a given number
 * @n:the number
 * Return: -1 (n<0),1 (n== 0)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n *  factorial(n - 1));
}
}
