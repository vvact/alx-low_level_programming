#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a linked list.
 * @head: A pointer to the head of the first node
 * Return: if no loop - NULL, otherwise, ptr to where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *r, *s;

	if (head == NULL || head->next == NULL)
		return (NULL);

	r = head->next;
	s = (head->next)->next;

	while (s)
	{
		if (r == s)
		{
			r = head;

			while (r != s)
			{
				r = r->next;
				s = s->next;
			}

			return (r);
		}

		r = r->next;
		s = (s->next)->next;
	}

	return (NULL);
}
