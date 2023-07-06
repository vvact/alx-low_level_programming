#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: the integer to use
 * @index: the index we use the get the value
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask; /*To create a mask for extracting bits*/
	/*this is putting 1 at the index and 0 to the rest of the bits*/

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitmask = 1ul << index; /*for extracting bits*/
	return ((n & bitmask) != 0);
}
