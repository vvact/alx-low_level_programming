#include "lists.h"
/**
 * listint_len - returns the number of items in the linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes in the list
*/
size_t listint_len(const listint_t *h)
{
size_t sum = 0;
while (h)
{
sum++;
h = h->next;
}
return (sum);
}
