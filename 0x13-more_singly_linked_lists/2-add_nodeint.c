#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * @head: position of the new node
 * @n: constant integer to be passed
 * Return: return address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr; /*points to the address of new node*/

	ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr; /*updating head pointer to the new node*/

	return (ptr); /*returning address of new node*/
	free(ptr);
}
