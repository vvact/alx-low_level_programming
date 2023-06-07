#include "main.h"

/**
 * find_root - find square root of number
 * @test: pointer to number to find the root of
 * @n: idk
 */
void find_root(int *test, int n)
{
	if ((*test) * (*test) == n)
	{
		return;
	}
	if (*test > n / 2)
	{
		*test = -1;
		return;
	}
	++*test;
	find_root(test, n);
}

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to find the square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int num = 1;
	int *test = &num;

	find_root(test, n);
	return (num);
}
