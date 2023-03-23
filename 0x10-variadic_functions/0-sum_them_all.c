#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums all its parameters
 * @n: numbers of inputs
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}
