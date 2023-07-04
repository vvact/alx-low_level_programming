#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: pointer that points to the first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}

