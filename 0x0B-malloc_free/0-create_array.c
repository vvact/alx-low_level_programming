#include <stdlib.h>
#include "stdio.h"
#include "main.h"
/**
 * create_array - Creates an array of chars and initializes.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: On success, returns a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

