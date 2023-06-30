#include "lists.h"
/**
 * list_len - returns the number of elements in a linked lists
 * @h: head pointer
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
