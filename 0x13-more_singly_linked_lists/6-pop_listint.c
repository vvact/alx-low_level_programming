#include "lists.h"
/**
 * pop_listint -removes the node of a linked list
 * @head: pointer to the first element in the in list
 * Return:the data inside theelement that was deleted,
 * else 0 of the the list is NULL
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int x;
if (!head || !*head)
return (0);
x = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (x);
}
