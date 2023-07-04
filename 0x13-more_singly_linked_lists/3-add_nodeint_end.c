#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function that a new node at the end a linked list
 * @head: header pointer, points to the first node
 * @n: constant integer to pass to the next node
 * Return: address/pointer of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr; /*points to the address of new node*/
	listint_t *temp; /*pointer to use while traversing*/

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL; /*or 0 */
	temp = *head;

	if (temp == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
