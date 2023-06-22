#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums all its parameters
 * @n: numbers of inputs
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	unsigned int sum = 0;

	va_list my_list;

	if (n == 0)
	{
		return (0);
	}
	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(my_list, int);
	}
	return (sum);
}
