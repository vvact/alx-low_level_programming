#include "lists.h"
/**
 * add_node - pinter that points to the function that adds a node
 * @head: position to add
 * @str: string to add
 * Return: the added node/address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (str != NULL)
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
	}
	ptr->next = (*head);
	*head = ptr;

	return (ptr);
	free(ptr);
}
