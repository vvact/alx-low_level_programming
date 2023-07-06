#include "main.h"
/**
 * binary_to_uint - converts a binary no. to a unsigned int(non -ve)
 * @b: pointer to the string that contains the binary number
 * Return: 0 if NULL or if it is not 0 -r a 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum_dec = 0; /*the final added decimal no*/

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1') /*checks if b consist only of 0 and 1*/
		{
			return (0);
		}
		else
		{
			sum_dec = sum_dec * 2 + (*b - '0'); /*working left shifting*/
			b++;
		}
	}
	return (sum_dec);
}
