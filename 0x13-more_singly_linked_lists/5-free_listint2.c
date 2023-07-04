#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees linked list and sets head to null
 * @head: header pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr; /*pointer to traverse*/
	listint_t *tmp; /*advances ptr to point to next node,to be freed*/

	if (head == NULL)
		return;
	ptr = *head;

	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}
