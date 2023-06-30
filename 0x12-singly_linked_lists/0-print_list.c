#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;
	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
