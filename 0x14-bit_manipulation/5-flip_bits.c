#include "main.h"
/**
 * flip_bits - returns no of bits needed to flip to get from one no. to another
 * @n: the integer to be flipped
 * @m: the integer to flip n to
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter_bits = 0; /*variable to rep flipped bits*/
	unsigned long int X_O_R; /*variable to perform XOR*/

	X_O_R = n ^ m;

	while (X_O_R > 0)
	{
		if (X_O_R & 1)
		{
			counter_bits++;
		}
		X_O_R >>= 1;
	}
	return (counter_bits);
}

