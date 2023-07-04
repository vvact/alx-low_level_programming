#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints elements of a linked list
 * @h: header pointer to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
