#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head pointer to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
