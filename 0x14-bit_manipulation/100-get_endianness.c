#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big indian, 1 if little indian
 */
int get_endianness(void)
{
	/*we set the low order (LSB), 00000001*/
	unsigned int m = 1;
	char *b = (char *) &m; /*dereference m*/

	if (*b)
	{
		return (1); /*little endian*/
	}
	else
	{
		return (0); /*big endian*/
	}
}
