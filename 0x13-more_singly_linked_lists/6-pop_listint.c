#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the first node
 * @head: points to the first node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr; /*temporary pointer for deletion*/

	int n; /*data to be returned*/

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		n = ptr->n;
		*head = (*head)->next;
		free(ptr);

		return (n);
	}
}
