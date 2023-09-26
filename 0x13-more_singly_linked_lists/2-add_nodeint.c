#include "lists.h"
#include <string.h>
#include <stddef.h>
/**
 * add_nodeint - adds new node
 * @head: head of the list
 * @n: int value
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}

