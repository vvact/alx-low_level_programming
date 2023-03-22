#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that iterates through the array
 * @size: size of the array
 * @action: pointer to the function to be executed
 * @array: array to be iterated through
 * Return:  nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
