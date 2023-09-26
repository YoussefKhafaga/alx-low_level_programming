#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node
 * @head: head of the list
 * @idx: index of node
 * @n: value of node
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = malloc(sizeof(listint_t));
unsigned int i = 0;

if (head == NULL || new == NULL)
{
return (NULL);
}
while (*head)
{
if (idx == i)
{
	new->next = (*head)->next;
	new->n = n;
	(*head)->next = new;
	(*head) = new;
	return (new);
}
(*head) = (*head)->next;
i++;
}
return (NULL);
}

