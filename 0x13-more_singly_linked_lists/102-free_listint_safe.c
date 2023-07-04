#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes in a linked list
 * @head: A pointer to the head of the list to scan
 * Return: If the list !looped - 0,Otherwise,the number ofnodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *r, *s;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	r = head->next;
	s = (head->next)->next;

	while (s)
	{
		if (r == s)
		{
			r = head;
			while (r != s)
			{
				nodes++;
				r = r->next;
				s = s->next;
			}

			r = r->next;
			while (r != s)
			{
				nodes++;
				r = r->next;
			}

			return (nodes);
		}

		r = r->next;
		s = (s->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the firstn node
 * Return: The size of the list that was freed
 * Description: The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, i;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
