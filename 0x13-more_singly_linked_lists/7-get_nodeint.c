#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: head of the first node
 * @index: the index of the nodes
 * Return: node or null if does not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr; /*pointer to traverse*/
	unsigned int j; /*counter*/

	ptr = head;

	for (j = 0; j < index && ptr != NULL; j++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}

