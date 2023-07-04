#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: points to the head of the first node
 * Return: Return: a pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL; /*pointer to the previous node*/
	listint_t *nextnode = NULL; /*pointer to the next node*/

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;

	return (*head);
}
