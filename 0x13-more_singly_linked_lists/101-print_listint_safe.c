#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the no of nodes linked list.
 * @head: A pointer to the head of the first node
 * Return: The number of nodes in the list, 0 if null
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *p, *q;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	p = head->next;
	q = (head->next)->next;

	while (q)
	{
		if (p == q)
		{
			p = head;
			while (p != q)
			{
				nodes++;
				p = p->next;
				q = q->next;
			}

			p = p->next;
			while (p != q)
			{
				nodes++;
				p = p->next;
			}

			return (nodes);
		}

		p = p->next;
		q = (q->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a linked list
 * @head: A pointer to the first node
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, j = 0; /*counter*/

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (j = 0; j < nodes; j++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
