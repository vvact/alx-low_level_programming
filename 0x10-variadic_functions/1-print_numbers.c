#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: sepearates numbers
 * @n: number of numbers/inputs
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_list, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(my_list);
}
