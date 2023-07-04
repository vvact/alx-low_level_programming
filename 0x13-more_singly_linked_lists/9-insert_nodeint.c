#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at any index
 * @head: pointer to ther first node
 * @idx: index to insert node, starts at 0
 * @n: data to pass to the new node
 * Return: newnode, null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr; /*pointer to traverse*/
	listint_t *newnode; /*pointer to the newly created node*/
	unsigned int j; /*counter*/

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t)); /*creating new node*/

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0) /*inserting at the beginning*/
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	ptr = *head; /*traverse to go to node before insertion pt*/

	for (j = 0; j < idx - 1 && ptr != NULL; j++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = ptr->next;
	ptr->next = newnode;
	return (newnode);
}
