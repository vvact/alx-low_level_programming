#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of the linked list
 * @head: node to add to
 * @str: string to add to node
 * Return: new node/addresso of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	if (str != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	return (node);
	free(node);
}
