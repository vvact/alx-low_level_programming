#include "main.h"
/**
 * print_binary - prints binary of a number
 * @n: the number to printed to binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);/*recursion, right shifting (n/2)*/
	}
	_putchar((n & 1) +  '0'); /*prints from lsb to msb*/
}
