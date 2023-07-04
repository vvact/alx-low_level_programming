#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns sum of a linked list
 * @head: pointer to the first node
 * Return: 0 if empty, sum if !empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr; /*pointer to traverse*/

	ptr = head;

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		while (ptr != NULL)
		{
			sum = sum + ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
}
