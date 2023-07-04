#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the first node
 * @index: position of the node to be deleted
 * Return: -1 if deletion fails, 1 if it succeeds
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr; /*pointer to traverse*/
	listint_t *prior; /*points to previous node*/
	unsigned int j; /*counter*/

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	ptr = *head;
	prior = NULL; /*previous node at end start is null/not there*/
	j = 0;

	while (ptr != NULL && j < index)
	{
		prior = ptr;
		ptr = ptr->next;
		j++;
	}
	if (ptr == NULL)
	{
		return (-1);
	}
	if (prior == NULL)
	{
		*head = ptr->next;
	}
	else
	{
		prior->next = ptr->next;
	}
	free(ptr);

	return (1);
}
